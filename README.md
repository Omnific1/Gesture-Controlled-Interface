# Gesture-Controlled-Interface
Gesture controller using Arduino and UltraSonic Sensors
# 🎮 Gesture-Controlled Laptop Using Arduino & Ultrasonic Sensors 🚀  

A **touch-free interface** that allows users to control a laptop’s media playback using **hand gestures**. This system uses **Arduino Uno** with **HC-SR04 ultrasonic sensors** to detect hand movements and send commands to a Python script, which translates them into **keyboard inputs** for media control.  

## 🎯 Features  
✅ **Touchless Media Control** – Play/Pause, Volume Up/Down using hand gestures  
✅ **Ultrasonic Distance Sensing** – HC-SR04 sensors detect hand proximity  
✅ **Arduino + Python Integration** – Arduino processes sensor data and Python converts it into keystrokes  
✅ **Simple & Expandable** – Easily modifiable for additional functionalities  

## 🛠 Technologies Used  
- **Hardware:** Arduino Uno, HC-SR04 Ultrasonic Sensors, USB.
- **Software:** Python, PyAutoGUI, Arduino IDE, Serial Communication.  
- **Libraries:** PySerial, OpenCV (optional for future upgrades).  

## 🚀 How It Works  
1. **Hand movements** are detected by the **ultrasonic sensors**.  
2. **Arduino Uno** processes the distance and transmits signals via **Serial Communication**.  
3. A **Python script** receives signals and triggers corresponding **keyboard inputs** to control VLC Media Player.  

