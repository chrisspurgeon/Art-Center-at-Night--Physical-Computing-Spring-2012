/*

 Dim a LED on pin 9 based on the value entered in. 
 Entered value needs to be a digit 0-9.
 
 */

int level, brightness;
void setup() {
  pinMode(9,OUTPUT);
  level = 5;
  Serial.begin(9600);
}

void loop() {

  if (Serial.available()) {
    level = Serial.parseInt();
    Serial.println(level);
  }


  brightness = map(level, 0, 9, 0, 255);
  analogWrite(9,brightness);
}

