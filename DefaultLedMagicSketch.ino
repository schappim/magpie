/*

Magpie test Sketch.
LedMagic

 */

void setup() {
  // declare all ledPin as OUTPUT:
  DDRD = B11111111;
  DDRB = DDRB | B00111111;
  DDRC = DDRC | B00111111;
}

void loop() {
  int i=0;
  for (i=0; i<20; i++)
  {
    digitalWrite(i,HIGH);
    delay(30);
  }
 
  delay(1000);
  
  for (i=0; i<20; i++)
  {
    digitalWrite(i,LOW);
    delay(30);
  }

  delay(1000);
  
  for (i=0; i<20; i++)
  {
    digitalWrite(i,HIGH);
    delay(30);
    digitalWrite(i,LOW);
    delay(10);
  }

  for (i=19; i>-1; i--)
  {
    digitalWrite(i,HIGH);
    delay(30);
    digitalWrite(i,LOW);
    delay(10);
  }
  
}
