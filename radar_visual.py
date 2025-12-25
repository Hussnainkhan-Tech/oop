import serial, time, math, threading
import numpy as np
import matplotlib.pyplot as plt
from matplotlib.animation import FuncAnimation

# ⚠️ Yahan apna Arduino port likho (Windows = COM3, Linux = /dev/ttyACM0)
SERIAL_PORT = 'COM3'
BAUD = 115200

ser = serial.Serial(SERIAL_PORT, BAUD, timeout=1)
points = []  
current_angle = 0
lock = threading.Lock()

def reader():
    global current_angle, points
    while True:
        try:
            line = ser.readline().decode(errors='ignore').strip()
            if not line: 
                continue
            parts = line.split(',')
            if len(parts) < 3:
                continue
            angle = float(parts[0])
            dist = float(parts[1])
            detected = int(parts[2])
            with lock:
                current_angle = angle
                if dist > 0 and detected == 1:
                    rad = math.radians(angle)
                    x = dist * math.cos(rad)
                    y = dist * math.sin(rad)
                    points.append((x, y, time.time()))
                points = [p for p in points if time.time() - p[2] < 5.0]
        except:
            pass

t = threading.Thread(target=reader, daemon=True)
t.start()

fig, ax = plt.subplots(figsize=(6,6))
ax.set_xlim(-250, 250)
ax.set_ylim(-250, 250)
ax.set_aspect('equal')
ax.set_facecolor('black')

for r in [50,100,150,200]:
    circle = plt.Circle((0,0), r, color='green', fill=False, alpha=0.25)
    ax.add_artist(circle)

scatter = ax.scatter([], [], s=60, c='red')
beam_line, = ax.plot([], [], linewidth=2, color='lime')

def update(frame):
    with lock:
        xs = [p[0] for p in points]
        ys = [p[1] for p in points]
        angle = current_angle
    if xs:
        scatter.set_offsets(np.c_[xs, ys])
    else:
        scatter.set_offsets(np.empty((0,2)))
    rad = math.radians(angle)
    beam_line.set_data([0, 250*math.cos(rad)], [0, 250*math.sin(rad)])
    return scatter, beam_line

ani = FuncAnimation(fig, update, interval=50, blit=True)
plt.title("Arduino Radar - Red = Object")
plt.show()
