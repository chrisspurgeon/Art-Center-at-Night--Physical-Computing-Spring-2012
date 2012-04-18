/* Processing sketch to connect with an Arduino */

import processing.serial.*;

Serial myPort; // create a serial object
int portIndex = 0; 
int val;
int x; 
int y;
int buttonON;

void setup() {
  size(600, 600);
  println(Serial.list()); // Here are all of the current serial ports
  println("Connecting to serial object " + Serial.list()[portIndex]);
  myPort = new Serial(this, Serial.list()[portIndex], 19200);
  myPort.bufferUntil('\n');
}

void draw() {
  background(0);
  if (buttonON == 1) {
    fill(255);
  } 
  else {
    fill(255, 0, 0);
  }
  ellipse(x+75, y+ 75, 150, 150);
}

void serialEvent (Serial myPort) {

  // get the ASCII string:
  String inString = myPort.readStringUntil('\n');

  if (inString != null) {
    // trim off any whitespace:
    inString = trim(inString);
    String[] parts = split(inString, "|");
    x = Integer.parseInt(parts[0]);
    y= Integer.parseInt(parts[1]);
    buttonON = Integer.parseInt(parts[2]);
    println(inString);
    println(parts[0]);
  }
}

