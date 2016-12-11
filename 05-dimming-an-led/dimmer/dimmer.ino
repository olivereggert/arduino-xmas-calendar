int led=11;
int brightness = 0;
int offset = 1;
void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  brightness += offset;
  if(brightness < 0) {
    brightness = 0;
    offset = 1;
  }
  if(brightness > 255) {
    brightness = 255;
    offset = -1;
  }
  analogWrite(led, brightness);
  delay(5);
}
