int timer = 75;

void setup() {
  // put your setup code here, to run once:
  for (int cikispin = 2; cikispin <= 8; cikispin++) {
    pinMode(cikispin, OUTPUT);
  }
}


void loop() {
  // put your main code here, to run repeatedly:
  for (int Pin = 2; Pin <= 8; Pin++) {
    digitalWrite(Pin, HIGH);
    delay(timer);
    digitalWrite(Pin, LOW);
  }
  for (int Pin = 8; Pin >=2; Pin--)
  {
    digitalWrite(Pin, HIGH);
    delay(timer);
    digitalWrite(Pin, LOW);
  }
}
