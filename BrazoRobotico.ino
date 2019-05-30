#include <Servo.h>
#define motorBase 12 //Declaro pin de la base
#define motorDerecha 11
#define motorIzquierda 10
#define motorMano 9


Servo Base;
Servo Izquierda;
Servo Derecha;
Servo Mano;   

void setup() {

Izquierda.attach(motorIzquierda);
Izquierda.write(0);
delay(2000);
Mano.attach(motorMano);
Mano.write(0);
delay(2000);








}

void loop() {
  // put your main code here, to run repeatedly:

}
