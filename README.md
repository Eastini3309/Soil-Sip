# 🌱 Soil-Sip

> An automated plant watering system that keeps your plants hydrated based on soil moisture levels.

---

## 🛠️ Project Background & Tech Stack

* **Hardware Transition:** Originally, this project was designed to run on a **Raspberry Pi Pico**. However, after accidentally breaking the Pico chip during testing, the project was adapted to run on an **Arduino**—the only other microcontroller available on hand at the time.
* **AI Collaboration:** Since I am much more familiar with **Python** than **C++**, I used **Gemini** to help draft and refine the Arduino C++ code, as well as to double-check hardware wiring and pin connections before powering the system.

---

## 📌 Features
* **Automated Watering:** Reads moisture levels and waters plants automatically.
* **Smart Thresholds:** Prevents over-watering and under-watering.
* **Arduino Powered:** Lightweight, reliable, and easy to set up.

---

## 🛠️ Hardware Requirements
* **Microcontroller:** Arduino Uno / Nano
* **Sensor:** Soil Moisture Sensor
* **Actuator:** 5V Mini Submersible Water Pump
* **Power Supply:** 6V (4x AA Battery Pack)
* **Misc:** Jumper Wires, 2N2222 Transistor, 1N4007 Diode, 330Ω Resistor, Tubing, Water Reservoir, Breadboard

---

## 💻 Circuit & Code Setup

1. Clone or download this repository.
2. Open `soil_sip.ino` in the Arduino IDE.
3. Select your board and port, then upload the code.

---

## 🔌 Circuit Model

Click the link below to view and interact with the 3D circuit layout in Tinkercad:

* 🌐 [View Interactive Circuit Model on Tinkercad](https://www.tinkercad.com/things/6baPPIA3ffR-soil-sip?sharecode=P2RLULkH1Hgg-_Y5SQ-erGE9e9SSS3rMDTGG3Rebe_s)

---

## 📓 Project Journal
Check out [`JOURNAL.md`](./JOURNAL.md) to follow along with daily updates, testing results, and project logs!
