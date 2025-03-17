# Arduino Blinker

A simple yet effective Arduino project that blinks an LED, perfect for beginners learning the basics of microcontroller programming. This project was designed and prototyped using Tinkercad, ensuring that both the circuit and code are straightforward and easy to follow.

## Table of Contents

- [Overview](#overview)
- [Features](#features)
- [Requirements](#requirements)
- [Circuit Diagram](#circuit-diagram)
- [Installation](#installation)
- [Usage](#usage)
- [Code Explanation](#code-explanation)
- [Troubleshooting](#troubleshooting)
- [Contributing](#contributing)
- [License](#license)
- [Contact](#contact)

## Overview

**Arduino Blinker** demonstrates how to control an LED using an Arduino. This project is ideal for newcomers to electronics and coding, serving as a foundation for more complex projects. The circuit was created in Tinkercad, reflecting a real-world setup with an Arduino UNO.

## Features

- **LED Blinking:** Turns an LED on and off at a regular interval.
- **Adjustable Interval:** Modify the blink timing easily in the source code.
- **Beginner-Friendly:** Simple C++ code designed for learning and experimentation.
- **Tinkercad Schematic:** A clear, prototyped circuit diagram for visual reference.

## Requirements

### Hardware

- Arduino board (Uno, Nano, Mega, etc.) — **Arduino UNO** is used in the schematic.
- LED (Red LED as shown in the Tinkercad schematic)
- Resistor (220 ohms recommended, labeled as R1 in the schematic)
- Breadboard and jumper wires

### Software

- [Arduino IDE](https://www.arduino.cc/en/software)
- Optionally, [Tinkercad](https://www.tinkercad.com/) for simulation and prototyping
- [PlatformIO IDE](https://platformio.org/install/ide?install=vscode) for Visual Studio Code

## Circuit Diagram

The circuit is based on a Tinkercad schematic with the following key details:

- **Arduino UNO**: The board used for the project.
- **LED Connection**: The LED (labeled D1 and RED in the schematic) is connected to digital pin **D13**.
- **Resistor**: A 220-ohm resistor (labeled R1) is connected in series with the LED.
- **Connections**:
  - The **anode** (longer leg) of the LED connects to pin **D13**.
  - The **cathode** (shorter leg) connects to one end of the resistor.
  - The other end of the resistor is connected to **GND**.

## Installation

1. **Clone the Repository:**

   ```sh
   git clone https://github.com/noiz-x/arduino-blinker.git
   cd arduino-blinker
   ```

2. **Open the Project in Arduino IDE:**
   - Open Arduino IDE.
   - Go to **File → Open** and navigate to the `arduino-blinker` directory.
   - Note: This project uses a `.cpp` file instead of a `.ino` file.

3. **Connect Your Arduino:**
   - Connect your Arduino board to your computer via USB.

4. **Upload the Code:**
   - Select your Arduino board model and the correct COM port from the **Tools** menu.
   - Click the **Upload** button to transfer the code to your Arduino board.

## Running with PlatformIO

1. **Open the Project in Visual Studio Code:**
   - Open Visual Studio Code.
   - Install the PlatformIO IDE extension if not already installed.
   - Open the `arduino-blinker` directory.

2. **Build the Project:**
   - Click on the PlatformIO icon in the sidebar.
   - Click on **Build** to compile the project.

3. **Upload the Code:**
   - Connect your Arduino board to your computer via USB.
   - Click on **Upload** to transfer the code to your Arduino board.

## Usage

### Set Up the Circuit

1. Follow the circuit diagram instructions above to wire your Arduino, LED, and resistor.

### Adjust the Blink Interval

- Modify the `delay()` values in the code to adjust the blink rate. Example:

  ```cpp
  delay(1000); // 1-second blink interval
  ```

  Changing it to:

  ```cpp
  delay(500); // 0.5-second blink interval for faster blinking
  ```

### Run the Program

- Once uploaded, the LED on pin **D13** will start blinking according to the defined interval.

## Code Explanation

### Setup Function

The `setup()` function initializes the Arduino board by setting the LED pin as an output.

```cpp
void setup() {
    pinMode(13, OUTPUT);
}
```

### Loop Function

The `loop()` function is the core of the program. It repeatedly turns the LED on and off with a delay in between.

```cpp
void loop() {
    digitalWrite(13, HIGH);  // Turn the LED on
    delay(1000);             // Wait for 1 second
    digitalWrite(13, LOW);   // Turn the LED off
    delay(1000);             // Wait for 1 second
}
```

## Troubleshooting

### LED Not Blinking

- **Check Connections:** Verify all wiring is secure and follows the schematic.
- **Correct Pin:** Ensure the LED is connected to pin **D13**.
- **Arduino Connection:** Make sure your Arduino board is connected and recognized by your computer.

### Compilation Issues

- **Arduino IDE Version:** Use the latest version of the Arduino IDE.
- **Board Selection:** Confirm the correct board and COM port are selected in the IDE.

## Contributing

Contributions are welcome! Feel free to fork the repository and submit pull requests with improvements, additional features, or enhanced documentation.

## License

This project is open-source and available under the [MIT License](LICENSE).

## Contact

For questions or further assistance, please reach out to the project maintainer at [**noiz-x**](https://github.com/noiz-x).
