/*

x coordinate - A0
y coordinate - A1
z coordinate - A2
LED:
Blue = 8 (x)
green = 9 (y)
red = 10 (z)


*/



void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(A3, INPUT);
  pinMode(A2, INPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}



void loop() 
{
  // put your main code here, to run repeatedly:
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  int x1 = analogRead(A0);
  int y1 = analogRead(A1);
  int z1 = analogRead(A2);

  delay(500);
  /*Serial.print("X - ");
  Serial.println(x);
  Serial.print("Y - ");
  Serial.println(y);
  Serial.print("Z - ");
  Serial.println(z);
  */
  int x2 = analogRead(A0);
  int y2 = analogRead(A1);
  int z2 = analogRead(A2);
  delay(50);
  if (abs(x1 - x2) >= 5 || abs(y1-y2)>=5 || abs(z1-z2)>=5)
  {
    digitalWrite(8, LOW);
    delay(50);
    digitalWrite(8, HIGH);
  }
  else
  {
    digitalWrite(8, HIGH);
  }
  if (abs(x1 - x2) >= 10 || abs(y1-y2)>=10 || abs(z1-z2)>=10)
  {
    digitalWrite(9, LOW);
    delay(50);
    digitalWrite(9, HIGH);
  }
  else
  {
    digitalWrite(9, HIGH);
  }
  if (abs(x1 - x2) >= 20 || abs(y1-y2)>=20 || abs(z1-z2)>=20)
  {
    digitalWrite(10, LOW);
    delay(50);
    digitalWrite(10, HIGH);
  }
  else
  {
    digitalWrite(10, HIGH);
  }

}



