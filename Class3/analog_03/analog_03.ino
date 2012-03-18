/* Let's flash a light based on a
 analog read value. Let's use a 
 timer so we can update more quickly.
 And a map() function to tweak things.
 */

int delayValue = 100;
long lastSwitchTime = 0;
boolean currentLightStatus = true;



void setup() {
  pinMode(9, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop() {
  delayValue = analogRead(A0);
  delayValue = map(delayValue, 0, 1023, 1, 5000);
  digitalWrite(9, currentLightStatus);
  Serial.println(delayValue);
  if (millis() > (delayValue + lastSwitchTime)) {
    Serial.println("          YO");
    currentLightStatus = !currentLightStatus;
    lastSwitchTime = millis();
  }
}


