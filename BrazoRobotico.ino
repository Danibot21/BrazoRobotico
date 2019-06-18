#include <Servo.h>
#define motorBase 12 //Declaro pin de la base
#define motorDerecha 11
#define motorIzquierda 10
#define motorMano 9

//Linea de prueba ´para git

Servo Base;
Servo Izquierda;
Servo Derecha;
Servo Mano;   
int pos = 0;
void setup() {

Base.attach (12);
{  for (pos = 90; pos >=20; pos -=5)
  {Base.write(pos);
  delay (150); }
  delay (2000);
}
Mano.attach (9);
{  for (pos = 180; pos >=160; pos -=5)
  {Mano.write(pos);
  delay (150); }
  delay (2000);
}
Izquierda.attach (10);
  {  for (pos = 150; pos <=175; pos +=5)
  {Izquierda.write(pos);
  delay (150); }
  delay (2000);
}
Derecha.attach (11);
  {  for (pos = 40; pos <=150; pos +=5)
  {Derecha.write(pos);
  delay (150); }
  delay (2000);
}
Mano.attach (9);
{  for (pos = 160; pos <=180; pos +=5)
  {Mano.write(pos);
  delay (150); }
  delay (2000);
}
Base.attach (12);
{  for (pos = 20; pos <=140; pos +=5)
  {Base.write(pos);
  delay (150); }
  delay (2000);
}
Mano.attach (9);
{  for (pos = 180; pos >=160; pos -=5)
  {Mano.write(pos);
  delay (150); }
  delay (2000);
}
Base.attach (12);
{  for (pos = 140; pos <=180; pos +=5)
  {Base.write(pos);
  delay (150); }
  delay (2000);
}
Izquierda.attach (10);
  {  for (pos = 175; pos >=120; pos -=5)
  {Izquierda.write(pos);
  delay (150); }
  delay (2000);
}
Derecha.attach (11);
  {  for (pos = 150; pos <=180; pos +=5)
  {Derecha.write(pos);
  delay (150); }
  delay (2000);
}
Mano.attach (9);
{  for (pos = 160; pos <=180; pos +=5)
  {Mano.write(pos);
  delay (150); }
  delay (2000);
}
Izquierda.attach (10);
  {  for (pos = 120; pos <=175; pos +=5)
  {Izquierda.write(pos);
  delay (150); }
  delay (2000);
}
Derecha.attach (11);
  {  for (pos = 180; pos >=120; pos -=5)
  {Derecha.write(pos);
  delay (150); }
  delay (2000);
}
Base.attach (12);
{  for (pos = 180; pos >=20; pos -=5)
  {Base.write(pos);
  delay (150); }
  delay (2000);
}
Mano.attach (9);
{  for (pos = 180; pos >=160; pos -=5)
  {Mano.write(pos);
  delay (150); }
  delay (2000);
}


















}
void loop() {
  // put your main code here, to run repeatedly:

}
