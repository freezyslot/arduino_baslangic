#include <Servo.h>
const int ServoPals = 9;
const int Pot = 0;
Servo servoKontrol;
int deger = 0;

void setup() {
  servoKontrol.attach(ServoPals);

}

void loop() {
  deger=analogRead(Pot);
  deger=map (deger, 0, 1023, 0, 179);
  servoKontrol.write(deger);
  delay(15);

}
