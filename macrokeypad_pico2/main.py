import time
import board
import digitalio
import usb_hid

from adafruit_hid.keyboard import Keyboard
from adafruit_hid.keyboard_layout_us import KeyboardLayoutUS
from adafruit_hid.keycode import Keycode

kbd = Keyboard(usb_hid.devices)
layout = KeyboardLayoutUS(kbd)

pins = [board.GP15, board.GP14, board.GP13, board.GP12]
buttons = []

for pin in pins:
    btn = digitalio.DigitalInOut(pin)
    btn.direction = digitalio.Direction.INPUT
    btn.pull = digitalio.Pull.UP
    buttons.append(btn)

last_states = [True, True, True, True]

while True:
    for i, btn in enumerate(buttons):
        current = btn.value

        if last_states[i] and not current:

            if i == 0:
                layout.write("Hello!")

            elif i == 1:
                layout.write("This is my test code hehe")

            elif i == 2:
                layout.write("Now you can experiment with it hehehehehe. You should look at adafruit's website, it has stuff.")
                
            # this will work when you open a browser and then press the button. not direct open    
            elif i == 3:
                layout.write("https://github.com/poojariutkarsh1")
                kbd.send(Keycode.ENTER)

        last_states[i] = current

    time.sleep(0.01)
