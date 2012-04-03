
int level9brightness = 0; // A
int level10brightness = 0; // B
int level11brightness = 0; // C

int level = 0;
char whichLight = 'A';

void setup() {
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  Serial.begin(9600);
}

void loop() {

  if (Serial.available()) {
    char ch = Serial.read();
    if (isDigit(ch)) {
      level = (level * 10) + (ch - '0');
    } 
    else if (ch == 10) {
      if (whichLight == 'A') {
        level9brightness = level;
      }
      else if (whichLight == 'B') {
        level10brightness = level;
      } 
      else if (whichLight == 'C') {
        level11brightness = level;
      }
      level = 0;
    } 
    else {
      whichLight = ch;
    }
  }

  analogWrite(9,level9brightness);
  analogWrite(10,level10brightness);
  analogWrite(11,level11brightness);
}



