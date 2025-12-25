import numpy as np
import matplotlib.pyplot as plt
import matplotlib.animation as animation
import random

# --------- Setup Figure ----------
fig = plt.figure(figsize=(7,7), facecolor="black")
ax = fig.add_subplot(111, polar=True, facecolor="black")
ax.set_theta_zero_location('N')
ax.set_theta_direction(-1)
ax.set_ylim(0, 200)
ax.set_xticks([])
ax.set_yticks([])

# --------- Spider Web Grid ----------
theta = np.linspace(0, 2*np.pi, 360)

# Circular rings like spider web
for r in [40, 80, 120, 160, 200]:
    ax.plot(theta, [r]*len(theta), color=(0,1,0,0.2))

# Radial lines
for angle in np.linspace(0, 2*np.pi, 12, endpoint=False):  # 12 lines
    ax.plot([angle, angle], [0, 200], color=(0,1,0,0.15))

# --------- Radar Beam + Detections ----------
beam_line, = ax.plot([], [], lw=2, color='lime')
scatter = ax.scatter([], [], s=80, c='red', alpha=0.9)

detections = []

def update(frame):
    global detections
    ang_deg = frame % 360
    ang_rad = np.deg2rad(ang_deg)

    # 25% chance of object detection
    if random.random() > 0.75:
        dist = random.randint(30, 180)
        detections.append([ang_rad, dist, 1.0])  # (theta, r, alpha)

    # Fade out old detections
    for d in detections:
        d[2] *= 0.92
    detections[:] = [d for d in detections if d[2] > 0.05]

    # Beam line
    beam_line.set_data([0, ang_rad], [0, 200])

    # Update detections
    if detections:
        thetas, rs, alphas = zip(*detections)
        scatter.set_offsets(np.c_[thetas, rs])
        scatter.set_facecolors([(1,0,0,a) for a in alphas])
    else:
        scatter.set_offsets([])

    return beam_line, scatter

ani = animation.FuncAnimation(fig, update, frames=range(0,360,2), interval=50, blit=True)
plt.title("Spider-Web Radar 🕸️", color="lime")
plt.show()
