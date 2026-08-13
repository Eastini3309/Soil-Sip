# Soil-Sip

(Note: Soil-Sip is a personal passion project I've wanted to build for a long time. I joined Hack Club while working on it to document my progress alongside other builders so fyi you might see in my journal things like “already time lapsed” just from the Hack Club’s built timelapse counter)

> An automated plant watering system that keeps your plants hydrated based on soil moisture levels.

---

## 📌 Features
* **Automated Watering:** Reads moisture levels and waters plants automatically.
* **Smart Thresholds:** Prevents over-watering and under-watering.
* **Arduino Powered:** Lightweight and easy to set up.

---

## 🛠️ Hardware Requirements
* **Microcontroller:** Arduino Uno / Nano (or your specific board)
* **Sensor:** Soil Moisture Sensor
* **Actuator:** 5V Mini Submersible Water Pump
* **Power Supply:** 6v 4x AA Battery Pack
* **Misc:** Jumper Wires, 2N2222 Transistor, 1N4007 Diode, 330Ω Resistor, Tubing, Water Resivoir

---

## 💻 Circuit & Code Setup

1. Clone or download this repository.
2. Open `soil_sip.ino` in the Arduino IDE.
3. Select your board and port, then upload the code.

```cpp
