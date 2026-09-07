# 🔥 Flame Sensor Alarm

A simple Arduino-based flame detection and warning system built as part of the **Sensor Series** by **Robotics With ZK**.

The project uses a flame sensor to detect infrared radiation associated with flames and activates an LED and buzzer as the warning system.

## ⚙️ Components

* Arduino
* Flame Sensor Module
* LED
* 220Ω Resistor
* Buzzer
* Breadboard
* Jumper Wires

## 🔌 Connections

| Component                     | Arduino Pin |
| ----------------------------- | ----------- |
| Flame Sensor VCC              | 5V          |
| Flame Sensor GND              | GND         |
| Flame Sensor DO               | D2          |
| LED (+) through 220Ω resistor | D8          |
| LED (−)                       | GND         |
| Buzzer (+)                    | D9          |
| Buzzer (−)                    | GND         |

## 🧠 How It Works

1. The flame sensor detects infrared radiation associated with a flame.
2. The Arduino reads the sensor's digital output.
3. Based on the sensor state, the Arduino controls the LED and buzzer.
4. The LED provides a visual warning.
5. The buzzer provides an audible warning.

## 💻 Code

The Arduino code is included in this repository:

`flame_sensor_alarm.ino`

## 🎯 Project Goal

This project is designed to demonstrate how a simple sensor can be combined with a microcontroller to create a basic safety and detection system.

## 📺 Sensor Series

This project is part of:

**EPISODE 01 — FLAME SENSOR**

* Part 1 — KNOW IT
* Part 2 — BUILD IT
* Part 3 — SEE IT

More sensor projects coming soon. ⚙️

## 👨‍💻 Creator

**Robotics With ZK**

Exploring robotics, electronics, sensors and engineering — one project at a time. 🚀
