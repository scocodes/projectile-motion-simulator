import pandas as pd
import matplotlib.pyplot as plt

df = pd.read_csv("outputs/trajectory.csv")
t = df["t"]
x = df["x"]
y = df["y"]
df.to_html("outputs/plots/trajectory.html")

plt.plot(x, y)
plt.xlabel("Distance (m)")
plt.ylabel("Height (m)")
plt.title("Trajectory Plot")
plt.grid(True)
plt.show()


