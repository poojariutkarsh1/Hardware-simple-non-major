📡 Ultrasonic Radar Scanner with Servo (Arduino)
📌 Overview

This project implements a simple ultrasonic radar scanning system using an Arduino, a servo motor, and an ultrasonic sensor. The servo sweeps from 0° to 180° and back, continuously measuring distance and indicating proximity using LEDs and a buzzer.

⚙️ Components Used
Arduino (Uno / Mega)
Ultrasonic Sensor (HC-SR04)
Servo Motor (SG90 or similar)
Buzzer
2 LEDs
Resistors (for LEDs)
Jumper wires
🔌 Pin Configuration
Component	Arduino Pin
Servo Signal	10
Ultrasonic Trig	11
Ultrasonic Echo	12
Buzzer	2
LED 1	3
LED 2	4
🚀 Working Principle
The servo motor rotates from 0° to 180° and then back.
At each angle:
The ultrasonic sensor sends a pulse.
It measures the time taken for echo return.

Distance is calculated using:

distance = duration * 0.017
Based on the distance:
If object < 10 cm:
LED (Pin 3) ON
LED (Pin 4) OFF
Buzzer → High frequency (1500 Hz)
Else:
LED (Pin 3) OFF
LED (Pin 4) ON
Buzzer → Low frequency (750 Hz)
🧠 Logic Flow
Start
  ↓
Servo sweeps (0 → 180)
  ↓
Measure distance
  ↓
IF distance < 10 cm
    → Alert (LED + High tone)
ELSE
    → Safe (LED + Low tone)
  ↓
Servo sweeps (180 → 0)
  ↓
Repeat
📏 Distance Formula Explanation
Sound travels at ~340 m/s

Converted for Arduino:

Distance (cm) = duration × 0.017
This already accounts for the round trip of the sound wave.
🎯 Features
Real-time scanning like a radar
Audible feedback using buzzer
Visual indication using LEDs
Continuous bidirectional sweep
⚠️ Notes / Improvements
Add Serial.print(distance) for debugging
Use mapping + visualization (Processing/Python) for real radar display
Add threshold tuning for better accuracy
Replace delay with non-blocking timing (millis) for smoother operation
🛠️ Future Enhancements
Create a radar GUI on PC
Add multiple distance zones (near, medium, far)
Store scan data for mapping
Integrate with ESP32 for wireless monitoring
📷 Output Behavior
Sweeping motion like a radar
Faster beeping when object is close
LED changes depending on proximity
