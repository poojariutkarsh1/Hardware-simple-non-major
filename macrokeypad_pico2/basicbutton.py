import board
import digitalio
import time

button = digitalio.DigitalInOut(board.GP15)
button.direction = digitalio.Direction.INPUT
button.pull = digitalio.Pull.UP

while True:
    if not button.value:
        print("Pressed!")

    time.sleep(0.05)
