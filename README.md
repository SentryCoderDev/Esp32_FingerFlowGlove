## Control Glove: Precisely Tracking Finger Movements with Potentiometers

Control Glove is a smart glove designed to accurately monitor finger movements using potentiometers and transmit this data to a central device powered by an ESP32-based board. The primary objective of this project is to provide a tool for precise tracking of finger movements and the transfer of this data to a central device.

### Key Features:
- Equipped with potentiometers for precise tracking and measurement of finger movements.
- Utilizes an ESP32-based board to gather and transmit the finger movement data.
- Designed for accurate and real-time monitoring.
- Customizable and open-source, allowing you to adapt the project to your specific needs.

### Code Explanation:
Transmitter.ino:
BluetoothSerial Object: The BluetoothSerial class is used to initiate serial communication over Bluetooth on the ESP32.
Bluetooth Initialization: SerialBT.begin("ControlGlove"); starts the Bluetooth service with the device name "ControlGlove." You can connect to this device using your central device (e.g., a computer or phone).
Data Transmission: The potentiometer readings are collected and formatted into a JSON string. This string is then sent over Bluetooth using SerialBT.println(data);.

### Receiving Data on the Central Device:
ReceiverPythonExample.py:
Pairing with ESP32: Use your computer or phone to search for Bluetooth devices and connect to "ControlGlove."
Software for Receiving Data: Once connected, you can use terminal software (like Putty or CoolTerm) or a Python script to listen for incoming data and process it.

### How to Use the Project:
1. Put on the Control Glove to begin tracking finger movements.
2. The ESP32-based board collects and processes the finger movement data.
3. Transmits the data to a central device for further analysis.
4. Ensures precise and real-time monitoring of finger movements.
5. The project can be customized to meet your specific requirements.

This GitHub repository contains all the source code, documentation, and examples related to the Control Glove project. Please feel free to contribute to the project or customize it according to your specific needs.

### Project Contributions
If you'd like to provide feedback or contribute to the project, please note that this repository is open to contributions. Don't hesitate to submit a pull request to contribute to the project's development.

Thank you, and welcome to the Control Glove project!
