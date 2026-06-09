#This code was applied on the Raspi pico2 using micropython on Thonny
#It is to toggle the inbuilt LED for 1.5 seconds

from machine import Pin
from time import sleep

led = Pin("LED", Pin.OUT)

while True:
    led.toggle()
    sleep(1.5)
