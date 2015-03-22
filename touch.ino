#include <CapacitiveSensor.h>

CapacitiveSensor   cs_2_4 = CapacitiveSensor(2, 4);      // 10M resistor between pins 4 & 2, pin 2 is sensor pin, add a wire and or foil if desired

void setup()
{
  cs_2_4.set_CS_AutocaL_Millis(0xFFFFFFFF);     // turn off autocalibrate on channel 1 - just as an example
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop()
{
  long start = millis();
  long total1 =  cs_2_4.capacitiveSensor(30);
  
  if (total1 > 30)
  { 
    digitalWrite(13, HIGH);
    Serial.println ("Touch me not");
  }

  if (total1 < 30)
  { 
    digitalWrite(13, LOW);
  }

    //Serial.println(total1);                  // print sensor output 1
  

  delay(100);                             // arbitrary delay to limit data to serial port
}
