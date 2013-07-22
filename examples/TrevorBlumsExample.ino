/*
This is the supplied sketch but with a mod by tlb

Magpie test Sketch.
LedMagic

PORTD=0to7
PORTC=Analog 0-5
PORTB=8-13
Direction is 1=write, 0-read

*/

void setup() {
  // declare all ledPin as OUTPUT:
  DDRD = B11111111;
  DDRB = DDRB | B00111111;
  DDRC = DDRC | B00111111;
}

void loop() {
  int i=0;
  //PORTD-=B11111111;
  for (i=0; i<20; i++) // all on r-l
  {
    digitalWrite(i,HIGH);
    delay(30);
  }
  //PORTD=B11111111;
  
  delay(1000);
  
  for (i=20; i>-1; i--) // all off l-r
  {
    digitalWrite(i,LOW);
    delay(30);
  }

  delay(1000);
  
  for (i=0; i<20; i++) // single led r-l
  {
    digitalWrite(i,HIGH);
    delay(30);
    digitalWrite(i,LOW);
    delay(10);
  }

  for (i=19; i>-1; i--) //single LED  l-r
  {
    digitalWrite(i,HIGH);
    delay(30);
    digitalWrite(i,LOW);
    delay(10);
  }
  for(int j=0;j<20;j++){ //single led jumpy progress r-l
    for (i=0; i<19; i++)
    {
      digitalWrite(j,HIGH);
      delay(5);
      digitalWrite(j,LOW);
      delay(5);
    }
  }
  for(int j=0;j<9;j++){ //flash whole group
    for (i=0; i<20; i++)
    {
       digitalWrite(i,HIGH);
     }
     delay(150);
     for (i=0; i<20; i++)
     {
       digitalWrite(i,LOW);
     }
      delay(150);
  }
}
