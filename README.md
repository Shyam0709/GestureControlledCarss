# 🚗 Gesture Controlled Car

A **Gesture Controlled Car** is an innovative robotics project that allows a user to control a car using hand gestures instead of traditional remote controls. This system uses motion sensors and wireless communication to translate gestures into movement commands.

---

## 📌 Features

* ✋ Control car using hand gestures
* 📡 Wireless communication (RF / Bluetooth)
* ⚡ Real-time response
* 🔋 Battery-powered system
* 🤖 Easy to build and extend

---

## 🛠️ Technologies Used

### Hardware

* Arduino (Uno / Nano)
* Accelerometer (MPU6050 / ADXL335)
* RF Module / Bluetooth Module (HC-05)
* Motor Driver (L298N / L293D)
* DC Motors + Wheels
* Chassis
* Battery Pack

### Software

* Arduino IDE
* Embedded C / Arduino Programming

---

## ⚙️ How It Works

1. The accelerometer detects the tilt of your hand.
2. Arduino processes the sensor data.
3. Based on gesture direction:

   * Forward → Car moves forward
   * Backward → Car moves backward
   * Left → Turns left
   * Right → Turns right
4. Signals are transmitted wirelessly to the car.
5. The receiver Arduino controls motors via the motor driver.

---

## 🔌 Circuit Diagram

* Transmitter side: Accelerometer + Arduino + RF/Bluetooth module
* Receiver side: Arduino + Motor Driver + Motors

*(You can add your circuit diagram image here)*

---

## 🚀 Getting Started

### Prerequisites

* Arduino IDE installed
* Basic knowledge of Arduino

### Installation

1. Clone this repository:

   ```bash
   git clone https://github.com/your-username/gesture-car.git
   ```

2. Open the Arduino code in Arduino IDE

3. Upload:

   * Transmitter code → Gesture module Arduino
   * Receiver code → Car Arduino

4. Connect all hardware components

5. Power ON the system

---

## 📂 Project Structure

```
gesture-controlled-car/
│
├── transmitter/
│   └── transmitter.ino
│
├── receiver/
│   └── receiver.ino
│
├── circuit/
│   └── diagram.png
│
└── README.md
```

---

## 📸 Demo

*(Add images or video link here)*

---

## 🔮 Future Enhancements

* 📱 Mobile app control integration
* 🎥 Camera-based gesture recognition
* 🌐 IoT integration
* 🤖 AI-based gesture prediction

---

## 🤝 Contributing

Contributions are welcome!
Feel free to fork this repo and submit a pull request.

---

## 📜 License

This project is licensed under the MIT License.

---

## 👨‍💻 Author

Your Name

* GitHub: https://github.com/your-username

---

## ⭐ Acknowledgements

* Arduino Community
* Open-source contributors
* Robotics enthusiasts

---

