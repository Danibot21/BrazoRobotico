#include <Servo.h>
#include <SoftwareSerial.h>
Servo motorBase, motorDerecha, motorIzquierda, motorMano;
SoftwareSerial BT(2,3);
void leer_DatoBT();
void leer_Dato();

void setup() {
Serial.begin(9600);
motorBase.attach(12);
motorDerecha.attach(4);
motorIzquierda.attach(5);
motorMano.attach(9);
}

char servo;
int angulo;
int Base,Derecha,Izquierda,Mano;

void loop() {
leer_Dato();
leer_DatoBT();
switch(servo)
{
case 'B':
Base = angulo;
break;
case 'D':
Derecha = angulo;
break;
case 'I':
Izquierda = angulo;
break;
case 'M':
Mano = angulo;
break;

}
motorBase.write(Base);
motorDerecha.write(Derecha);
motorIzquierda.write(Izquierda);
motorMano.write(Mano);
}

void leer_Dato()
{
  if (Serial.available() > 0)
  {
    servo = Serial.read();
    angulo = Serial.parseInt();
  }
}


void leer_DatoBT()
{
  if (BT.available() > 0)
  {
    servo = BT.read();
    angulo = BT.parseInt();
  }
}
