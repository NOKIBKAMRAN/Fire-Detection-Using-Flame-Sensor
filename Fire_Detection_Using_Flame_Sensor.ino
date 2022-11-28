
#include <ESP8266WiFi.h>
#define Buzzer D1
#define Sensor D0

void setup()
{
  Serial.begin(9600);
  pinMode(Buzzer, OUTPUT);
  pinMode(Sensor, INPUT);
}
void loop()
{
  int fireValue = digitalRead(Sensor);
  Serial.println(fireValue);
  if(fireValue == 0)
  {
    digitalWrite(Buzzer, HIGH);
    delay(1000);
  }
  else
  {
    digitalWrite(Buzzer, LOW);
  }
  delay(500);
}
