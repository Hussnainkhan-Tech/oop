# radar_sim_enhanced.py
import numpy as np
import matplotlib.pyplot as plt
import matplotlib.animation as animation
import random
import sys

# optional winsound for Windows beep (safe import)
try:
    import winsound
    HAVE_BEEP = True
except Exception:
    HAVE_BEEP = False

# ---------- Figure / Axes ----------
fig = plt.figure(figsize=(7,7), facecolor='black')
ax = fig.add_subplot(111, polar=True, facecolor='black')
ax.set_theta_zero_location('N')
ax.set_theta_direction(-1)
ax.set_ylim(0, 200)
ax.set_xticks([])
ax.set_yticks([])

# range circles (subtle)
theta = np.linspace(0, 2*np.pi, 360)
for r in [50, 100, 150, 200]:
    ax.plot(theta, [r]*theta.size, color=(0,1,0,0.12), linewidth=1)

# ---------- Artists ----------
beam_line, = ax.plot([], [], lw=2, color=(0.6,1,0.2,0.95))   # sweeping beam
scatter = ax.scatter([], [], s=[], c=[])                     # detections
info_text = ax.text(0.02, 0.02, "", transform=ax.transAxes, color='lime', fontsize=10, va='bottom')

# ---------- Detection storage ----------
# each detection: {'theta': rad, 'r': cm, 'alpha': 1.0}
detections = []

# ---------- Update function ----------
def update(frame):
    global detections
    try:
        ang_deg = frame % 360
        ang_rad = np.deg2rad(ang_deg)

        # simulate detection randomly (30% chance)
        if random.random() > 0.7:
            dist = random.randint(20, 180)
            detections.append({'theta': ang_rad, 'r': dist, 'alpha': 1.0})
            if HAVE_BEEP:
                try:
                    winsound.Beep(1000, 60)  # short beep on Windows
                except Exception:
                    pass
            else:
                # fallback: attempt terminal bell (may or may not make sound)
                print('\a', end='', flush=True)

        # fade existing detections
        for d in detections:
            d['alpha'] *= 0.90
        # keep only visible ones
        detections = [d for d in detections if d['alpha'] > 0.04]

        # prepare arrays for scatter
        if detections:
            thetas = np.array([d['theta'] for d in detections])
            rs = np.array([d['r'] for d in detections])
            alphas = np.array([d['alpha'] for d in detections])
            sizes = 220 * (alphas ** 1.1)               # size scales with alpha
            colors = np.vstack([np.ones_like(alphas),   # R
                                np.zeros_like(alphas),  # G
                                np.zeros_like(alphas),  # B
                                alphas]).T              # A (alpha)
            scatter.set_offsets(np.c_[thetas, rs])
            scatter.set_sizes(sizes)
            scatter.set_facecolors(colors)
            scatter.set_edgecolors(colors)  # avoid black edges that look ugly on dark bg
        else:
            scatter.set_offsets(np.empty((0,2)))
            scatter.set_sizes(np.array([]))
            scatter.set_facecolors(np.empty((0,4)))

        # update beam (theta, r)
        beam_line.set_data([0, ang_rad], [0, 200])

        # info text (show latest detection if any)
        if detections:
            last = detections[-1]
            last_deg = np.rad2deg(last['theta'])
            info_text.set_text(f"Detections: {len(detections)}\nLatest: {last_deg:.0f}°, {last['r']:.0f} cm")
        else:
            info_text.set_text("Detections: 0")

    except Exception as e:
        # never break animation loop; print error to console for debugging
        print("Animation error:", e, file=sys.stderr)

    # return artists to redraw
    return beam_line, scatter, info_text

# ---------- Run animation ----------
ani = animation.FuncAnimation(fig, update, frames=range(0, 360, 2),
                              interval=60, blit=False)
plt.title("Radar Simulation", color='lime')
plt.show()
