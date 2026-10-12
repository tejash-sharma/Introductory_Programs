import turtle
import math
import time
screen = turtle.Screen()
screen.setup(700, 700)
screen.bgcolor("#000000")
screen.tracer(0)

t = turtle.Turtle()
t.hideturtle()
t.speed(0)
t.width(1)

colors = [
    "#ff1744", "#ffea00",
    "#00ff9d", "#00e5ff",
    "#2979ff", "#d500f9"
]
for i in range(1000):
    t.color(colors[i % len(colors)])
    points = 120
    phase = i * 0.055

    orbit_radius = 80
    orbit_angle = math.radians(i * 4.8)
    cx = orbit_radius * math.cos(orbit_angle)
    cy = orbit_radius * math.sin(orbit_angle)

    for j in range(points + 1):
        a = math.radians(j * 360 /points)
        x = 260 * math.cos(a)
        y = 125 * math.sin(a + phase)

        rot = math.radians(i * 2.2)
        x_rot = x * math.cos(rot) - y * math.sin(rot)
        y_rot = x * math.sin(rot) + y * math.cos(rot)

        X = x_rot + cx
        Y = y_rot + cy

        if j == 0:
            t.penup()
            t.goto(X, Y)
            t.pendown()
        else:
            t.goto(X,Y)

    screen.update()
    time.sleep(0.035)

t.penup()
t.goto(0, 0)
t.dot(105, "#000000")

screen.update()
turtle.done()

