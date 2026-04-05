# 🛡️ AEGIS – Smart Self-Defense Kit

AEGIS is a compact, handheld self-defense system built using an ESP32. It combines audible alerts, visual signals, and future-ready smart features like camera recording and GPS tracking into a single portable device.

---

## 🚀 Features

- 🔘 Emergency Mode Toggle via push button  
- 🔊 Siren Effect (dynamic frequency buzzer)  
- 💡 LED Indicator for visual alert  
- ⚡ Fast and responsive system  
- 🧠 Built on ESP32 for scalability  
- 📦 Compact, ergonomic canister-style design  

---

## 🧱 Physical Design

AEGIS is designed as a canister-style handheld device for quick access and ease of use during emergencies.

### 🔹 Component Layout

- Top Section:  
  - Defensive canister module (deterrent)

- Side (Near Top):  
  - ESP32-CAM (planned) for capturing footage  

- Internal Section:  
  - ESP32 microcontroller  
  - GPS module (planned)  
  - Battery system  

- Bottom Section:  
  - Buzzer  
  - LED  

- Grip Area:  
  - Push button for activation  

---

## ⚙️ Working Principle

1. Device starts in idle mode  
2. Button press toggles Emergency Mode  
3. In Emergency Mode:
   - Buzzer generates a siren effect (800 Hz → 2000 Hz loop)  
   - LED stays ON  
4. Pressing again:
   - Stops buzzer  
   - Turns OFF LED  
   - Returns to idle  

---

## 🧩 Hardware Components

- ESP32  
- Buzzer  
- LED  
- Push Button  
- Resistors  
- ESP32-CAM (planned)  
- GPS Module (planned, e.g., NEO-6M)  

---

## 🔌 Pin Configuration

| Component | GPIO Pin |
|----------|---------|
| Buzzer   | 22      |
| LED      | 23      |
| Button   | 21      |

---

## 🧠 Code Features

- Debounced button input  
- State-based control system  
- Dynamic siren generation using PWM (LEDC)  
- Modular structure for future expansion  

---

## 🛠️ Future Improvements

### 📷 Camera Integration (ESP32-CAM)

- Capture image/video on emergency trigger  
- Store or transmit footage via WiFi  
- Optional: Face detection  

---

### 📍 GPS Tracking (e.g., NEO-6M)

- Real-time location tracking  
- Send coordinates via:
  - SMS (GSM module)
  - Internet (IoT platforms)  

---

### 📡 Communication System

- GSM module (SIM800L) for emergency SMS  
- WiFi-based alerts  
- Integration with apps (Blynk / Telegram)  

---

### 🔐 Smart Features

- Long press / hidden trigger  
- Fall detection (accelerometer)  
- Automatic emergency activation  

---

### 🔋 Power System

- Rechargeable battery  
- Power-efficient design  
- Deep sleep mode  

---

## 🔮 Future Vision

AEGIS aims to evolve into a complete personal safety ecosystem:

- Live location tracking  
- Real-time video capture  
- Instant alert system  
- AI-based threat detection  

---

## ⚠️ Disclaimer

This project is intended for personal safety and educational purposes only.  
Any defensive components must be used responsibly and in accordance with local laws.

---

## 🧑‍💻 Author

Utkarsh Poojari  

---

## 📜 License

Open-source for educational and personal use  
