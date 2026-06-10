# Raspberry Pi Pico Macro Keypad (CircuitPython)

A simple 4-key macro keypad built using a Raspberry Pi Pico and CircuitPython. Each button is connected to a GPIO pin and acts as a USB keyboard, allowing predefined text or commands to be typed on a connected computer.

## Features

* 4 programmable macro keys
* Uses CircuitPython and Adafruit HID libraries
* Appears as a standard USB keyboard
* Can type text, URLs, commands, or shortcuts
* Easy to customize and expand

## Hardware Used

* Raspberry Pi Pico / Pico 2
* 4 Push Buttons
* Jumper Wires
* USB Cable

## Pin Connections

| Button   | GPIO Pin |
| -------- | -------- |
| Button 1 | GP15     |
| Button 2 | GP14     |
| Button 3 | GP13     |
| Button 4 | GP12     |

Each button is connected between the GPIO pin and GND. Internal pull-up resistors are enabled in software.

## Software Setup

1. Install CircuitPython on the Pico.
2. Install the required Adafruit HID libraries in the `lib` folder:

   * adafruit_hid
3. Copy the code into `code.py`.
4. Connect the Pico to your computer.

## Current Macros

### Button 1 (GP15)

Types:

Hello!

### Button 2 (GP14)

Types:

This is my test code hehe

### Button 3 (GP13)

Types:

Now you can experiment with it hehehehehe. You should look at adafruit's website, it has stuff.

### Button 4 (GP12)

Types:

https://github.com/poojariutkarsh1

Then presses Enter.

> Note: The URL is typed wherever the cursor is currently focused. For best results, click the browser address bar before pressing the button.

## How It Works

The Pico continuously monitors the state of each button. When a button press is detected, the corresponding macro is sent to the computer through USB HID keyboard emulation.

The program uses edge detection to ensure the macro is only triggered once per button press.

## Future Improvements

* Add OLED display support
* Multiple macro profiles
* Media control keys
* Application launch shortcuts
* RGB status indicators
* Rotary encoder support

## Author

Utkarsh Poojari

GitHub: https://github.com/poojariutkarsh1
