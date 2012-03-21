int delayValue;
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
  digitalWrite(9,currentLightStatus);
  if (millis() > (lastSwitchTime + delayValue)) {
    currentLightStatus = !currentLightStatus;
    lastSwitchTime = millis();
    Serial.println("hi");
  }
}

