// it finds the i2c device's address
#include <Wire.h>

void setup() {
  Wire.begin();
  Serial.begin(9600);

  Serial.println("I2C Scanner");
}

void loop() {
  byte error, address;
  int nDevices = 0;

  for(address = 1; address < 127; address++) {
    Wire.beginTransmission(address);
    error = Wire.endTransmission();

    if(error == 0) {
      Serial.print("Found device at 0x");
      if(address < 16)
        Serial.print("0");
      Serial.println(address, HEX);

      nDevices++;
    }
  }

  if(nDevices == 0)
    Serial.println("No I2C devices found");

  delay(5000);
}
