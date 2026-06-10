import board
import digitalio
import time

button = digitalio.DigitalInOut(board.GP15)
button.direction = digitalio.Direction.INPUT
button.pull = digitalio.Pull.UP

last_state = True

while True:
    current = button.value

    if last_state and not current:
        print("Button Pressed Once")

    last_state = current
    time.sleep(0.01)
