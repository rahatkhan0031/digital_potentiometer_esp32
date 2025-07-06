# Digital Potentiometer Control with ESP32

This project demonstrates how to control a digital potentiometer using an ESP32 and Arduino IDE.

## 🔧 Components Used

- ESP32 Dev Board
- Digital Potentiometer (e.g., MCP41010 or similar)
- Breadboard & Jumper Wires
- Arduino IDE

## 💡 Functionality

The ESP32 sends SPI commands to the digital potentiometer to change its resistance level dynamically. Useful for volume control, signal tuning, or analog reference adjustment.

## 📁 Files

- `digital_potentiometer_new.ino`: Arduino sketch to control the potentiometer

## 🔌 Circuit Diagram


## ▶️ How to Run

1. Connect your potentiometer as per its datasheet (SPI: MOSI, SCK, and CS)
2. Open the `.ino` file in Arduino IDE
3. Select the correct ESP32 board
4. Upload the code
5. Monitor the output using serial monitor or voltmeter

## 📜 License

MIT License
