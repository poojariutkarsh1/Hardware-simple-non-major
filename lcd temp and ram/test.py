import serial
import psutil
import time

ser = serial.Serial("COM4", 9600)

time.sleep(2)

while True:

    cpu = psutil.cpu_percent()
    ram = psutil.virtual_memory().percent

    data = f"{cpu},{ram}\n"

    ser.write(data.encode())

    print(data)

    time.sleep(1)
