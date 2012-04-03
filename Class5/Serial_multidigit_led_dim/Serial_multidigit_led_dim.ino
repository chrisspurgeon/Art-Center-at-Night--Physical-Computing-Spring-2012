
int level, brightness;
void setup() {
  pinMode(9,OUTPUT);
  level = 0;
  Serial.begin(9600);
}

void loop() {

  if (Serial.available()) {
    char ch = Serial.read();
    if (isDigit(ch)) {
      level = (level * 10) + (ch - '0');
    } 
    else if (ch == 10) {
      brightness = level;
      level = 0;
    }
  }

  analogWrite(9,brightness);
  Serial.println(brightness);
}


