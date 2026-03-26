# 📡 Ultrasonic Radar Scanner (Arduino)

## 📌 Overview
A simple radar system using an ultrasonic sensor and a servo motor. The servo sweeps from 0° to 180° and continuously measures distance.

## ⚙️ Components
- Arduino  
- HC-SR04 Ultrasonic Sensor  
- Servo Motor  
- Buzzer  
- 2 LEDs  

## 🚀 Working
- The servo rotates back and forth (0° ↔ 180°)
- The ultrasonic sensor measures distance at each angle
- If distance < 10 cm:
  - 🔴 LED ON (Alert)
  - 🔕 Buzzer at 1500 Hz
- Else:
  - 🟢 LED ON (Safe)
  - 🔔 Buzzer at 750 Hz

## 🔌 Pins Used
- Servo → 10  
- Trig → 11  
- Echo → 12  
- Buzzer → 2  
- LEDs → 3, 4  

## 📏 Formula
Distance = duration × 0.017
