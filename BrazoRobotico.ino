#include <Servo.h>
Servo motorBase, motorDerecha, motorIzquierda, motorMano;


void setup() {
Serial.begin(9600);
motorBase.attach(12);
motorDerecha.attach(4);
motorIzquierda.attach(3);
motorMano.attach(9);
}

char servo;
int angulo;
int Base,Derecha,Izquierda,Mano;

void loop() {
leer_Dato();
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
