# Arduino Bluetooth-Controlled Motor System

## Project Description

This project is an Arduino Nano-based system that can be controlled via Bluetooth using a mobile application. It is designed to control the rotation direction and speed of a motor, while providing visual feedback through LEDs.

## Components List

- Arduino Nano
- HC-06 Bluetooth Module
- L298N Motor Driver Module
- 1 Red LED
- 1 Blue LED
- Resistors (e.g., 220 Ohm)
- Cables and Connectors

## Wiring Diagram

Here's the wiring diagram for connecting the components:

- Arduino Nano HC-06 Bluetooth Module
- RX (D10) ----------------------------> TX
- TX (D11) ----------------------------> RX
- 5V ----------------------------> VCC
- GND ----------------------------> GND

- Arduino Nano L298N Motor Driver
- D3 ----------------------------> IN1
- D4 ----------------------------> IN2
- D5 (PWM) ----------------------------> ENA
- GND ----------------------------> GND

- LED Connections
- D6 --(+) Red LED (-)--[220 Ohm]---> GND
- D7 --(+) Blue LED (-)-[220 Ohm]---> GND


## Arduino Code

The code for this project is responsible for controlling the motor and managing the state of the LEDs. The complete code can be found in the project's GitHub repository.

## Installation and Usage

1. Download the code from the GitHub repository.
2. Upload the Arduino code to the Arduino Nano using the Arduino IDE.
3. Follow the wiring diagram above to connect the components.
4. Pair the Arduino HC-06 Bluetooth module with your smartphone.
5. Download a compatible Bluetooth control app on your smartphone (e.g., Arduino Bluetooth Controller from the Play Store).
6. Open the app and connect to the HC-06 module.
7. Start controlling the motor and observe the LEDs' behavior.

## Contributing

Contributions to this project are welcome. If you wish to improve the code, modify features, or add new functionalities, feel free to create a pull request or open an issue!
