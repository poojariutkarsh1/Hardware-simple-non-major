#include <Wire.h>
#include <hd44780.h>
#include <hd44780ioClass/hd44780_I2Cexp.h>

hd44780_I2Cexp lcd;

String incoming = "";

void setup()
{
  Serial.begin(9600);

  lcd.begin(16, 2);
  lcd.backlight();

  lcd.print("Waiting...");
}

void loop()
{
  while (Serial.available())
  {
    char c = Serial.read();

    if (c == '\n')
    {
      int split = incoming.indexOf(',');

      String cpu = incoming.substring(0, split);
      String ram = incoming.substring(split + 1);

      lcd.clear();

      lcd.setCursor(0, 0);
      lcd.print("CPU:");
      lcd.print(cpu);
      lcd.print("%");

      lcd.setCursor(0, 1);
      lcd.print("RAM:");
      lcd.print(ram);
      lcd.print("%");

      incoming = "";
    }
    else
    {
      incoming += c;
    }
  }
}
