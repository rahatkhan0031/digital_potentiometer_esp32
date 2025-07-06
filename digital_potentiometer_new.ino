#include <SPI.h>

byte address = 0x00;
int CS= 10;

void setup()
{
Serial.begin(9600);    
pinMode (CS, OUTPUT);
SPI.begin();
}

void loop()
{

for (int i = 250; i >= 0;)
{
  int sensorValue = analogRead(A0);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage = sensorValue * (5.0 / 1023.0);
  // print out the value read:
  Serial.print("Voltage =");// prins the text "Voltage ="
  Serial.print(voltage);
  Serial.println();
digitalPotWrite(i);
delay(10);
}
}

int digitalPotWrite(int value)
{
digitalWrite(CS, LOW);
SPI.transfer(address);
SPI.transfer(value);
digitalWrite(CS, HIGH);
}
