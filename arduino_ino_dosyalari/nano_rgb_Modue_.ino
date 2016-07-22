
int kirmizi = 3;
int yesil = 4;
int mavi = 5;

void setup() {
pinMode(kirmizi, OUTPUT);
pinMode(yesil, OUTPUT);
pinMode(mavi, OUTPUT);

}

void loop() {
  digitalWrite(kirmizi, HIGH);
  delay(100);
  digitalWrite(mavi,HIGH);
  delay(100);
  digitalWrite(yesil, HIGH);
  delay(100);


}
