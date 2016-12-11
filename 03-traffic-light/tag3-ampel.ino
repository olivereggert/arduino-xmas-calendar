int rot = 12;
int gelb = 10;
int gruen = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(rot, OUTPUT);
  pinMode(gelb, OUTPUT);
  pinMode(gruen, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  normaleAmpel();
  //verruecktwerden();
}

void normaleAmpel() {
  digitalWrite(gruen, HIGH);
  delay(10000);
  digitalWrite(gruen, LOW);
  digitalWrite(gelb, HIGH);
  delay(2000);
  digitalWrite(gelb, LOW);
  digitalWrite(rot, HIGH);
  delay(10000);
  digitalWrite(gelb, HIGH);
  delay(1000);
  digitalWrite(gelb, LOW);
  digitalWrite(rot, LOW);
}

void verruecktwerden() {
  digitalWrite(gruen, HIGH);
  delay(75);
  digitalWrite(gruen, LOW);
  digitalWrite(gelb, HIGH);
  delay(75);
  digitalWrite(gelb, LOW);
  digitalWrite(rot, HIGH);
  delay(75);
  digitalWrite(rot, LOW);
  delay(75);
}

