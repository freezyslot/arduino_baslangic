int sari = 12;
int mavi = 11;
int kirmizi = 10;
int sari2 = 9;
int mavi2 = 8;
int kirmizi2 = 7;

void setup()
{
  pinMode(sari, OUTPUT);
  pinMode(mavi, OUTPUT);
  pinMode(kirmizi, OUTPUT);
  pinMode(sari2, OUTPUT);
  pinMode(mavi2, OUTPUT);
  pinMode(kirmizi2, OUTPUT);

}

void loop()
{
  digitalWrite(sari, HIGH);
  delay(100);
  digitalWrite(sari, LOW);
  digitalWrite(mavi, HIGH);
  delay(100);
  digitalWrite(mavi, LOW);
  digitalWrite(kirmizi, HIGH);
  delay(100);
  digitalWrite(kirmizi, LOW);
  digitalWrite(sari2, HIGH);
  delay(100);
  digitalWrite(sari2, LOW);
  digitalWrite(mavi2, HIGH);
  delay(100);
  digitalWrite(mavi2, LOW);
  digitalWrite(kirmizi2, HIGH);
  delay(100);
  digitalWrite(kirmizi2, LOW);
  digitalWrite(mavi2, HIGH);
  delay(100);
  digitalWrite(mavi2, LOW);
  digitalWrite(sari2, HIGH);
  delay(100);
  digitalWrite(sari2, LOW);
  digitalWrite(kirmizi, HIGH);
  delay(100);
  digitalWrite(kirmizi, LOW);
  digitalWrite(mavi, HIGH);
  delay(100);
  digitalWrite(mavi, LOW);
  digitalWrite(sari, LOW);
  
}



