#include "tone.h"
int Senspin= A0;
int Sensval =0;
void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}
void loop()
{
   Sensval = analogRead(Senspin); 
  /*Serial.println(Sensval);
  delay(500);
  */
  if (Sensval>75 && Sensval<350)
  {
    Serial.println("BACK OFF MUTHAFUCKA!");
    delay(1000);
    digitalWrite(13, HIGH);
    delay(200);
          }
          
  else
  {
    digitalWrite(13,LOW);
    
 }
 
    
}