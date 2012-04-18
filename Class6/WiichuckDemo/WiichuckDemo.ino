/*
 * WiiChuckDemo -- 
 *
 * 2008 Tod E. Kurt, http://thingm.com/
 *
 */

#include <Wire.h>
#include "nunchuck_funcs.h"

// White is GND
// Yellow is +V
// Green is SDA, goes in A4
// Blue is SCK, goes in A5



// Black is the case




int loop_cnt=0;

byte accx,accy,zbut,cbut;
int ledPin = 13;
int test;


void setup()
{
  Serial.begin(19200);
  nunchuck_setpowerpins();
  nunchuck_init(); // send the initilization handshake

}

void loop()
{
  if( loop_cnt > 100 ) { // every 100 msecs get new data
    loop_cnt = 0;

    nunchuck_get_data();

    accx  = nunchuck_accelx(); // ranges from approx 70 - 182
    accy  = nunchuck_accely(); // ranges from approx 65 - 173
    zbut = nunchuck_zbutton();
    cbut = nunchuck_cbutton(); 
    test = nunchuck_accelx();

//    Serial.print("accx: "); 
//    Serial.print((byte)accx,DEC);
//    Serial.print("\taccy: "); 
//    Serial.print((byte)accy,DEC);
//    Serial.print("\tzbut: "); 
//    Serial.print((byte)zbut,DEC);
//    Serial.print("\tcbut: "); 
//    Serial.println((byte)cbut,DEC);
//    Serial.println();

    int x = map((byte)accx, 70, 190, 0, 200);
    int y = map((byte)accy, 70, 190, 0, 200);
    Serial.print(x);
    Serial.print("|"); 
    Serial.print(y);
    Serial.print("|"); 
    Serial.print((byte)zbut,DEC);
    Serial.println();
  }
  loop_cnt++;
  delay(1);
}


