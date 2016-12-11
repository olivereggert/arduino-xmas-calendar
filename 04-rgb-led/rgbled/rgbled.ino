int r = 6;
int g = 3;
int b = 5;

int w=8;
int h=3;
int matrix[8][3] = {
  1, 0, 0, // rot
  0, 1, 0, // gruen
  0, 0, 1, // blau
  1, 1, 0, //
  1, 0, 1,
  0, 1, 1,
  1, 1, 1,
  0, 0, 0,
};

boolean do_show_color = true;

void setup() {
  // put your setup code here, to run once:
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);
  
  Serial.begin(9600);
  Serial.print(HIGH);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  int thesize = sizeof(matrix)/sizeof(int);

  for(int x=0; x < w; x++) {
    for(int y=0; y < h; y++) {
      if(do_show_color) {
        show_color(matrix[x]);  
      }
    }
  }
}

void show_color(int rgb[]) {
  digitalWrite(r, rgb[0]);
  digitalWrite(g, rgb[1]);
  digitalWrite(b, rgb[2]);
  delay(1000);
}


