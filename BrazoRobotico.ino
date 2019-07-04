#include <Servo.h>
#include <SoftwareSerial.h>
Servo motorBase, motorDerecha, motorIzquierda, motorMano; //Declaracion de los nombres de los 4 servos
SoftwareSerial BT(2,3); // pin del modulo BT
void leer_DatoBT(); //Declaracion de funcion para administrar datos desde el modulo BT
void leer_Dato(); //Declaracion de funcion para administrar datos desde el monitor serial  

void setup() {
Serial.begin(9600);
motorBase.attach(12);
motorDerecha.attach(4);
motorIzquierda.attach(5);
motorMano.attach(9);
//Declaracion de pines de los servos
}

char servo;
int angulo;
int Base,Derecha,Izquierda,Mano;
//Declaracion de variables globales para capturar datos ingresados mediante monitor o BT

void loop() {
leer_Dato();//Definicion de funcion para administrar datos desde el modulo BT, donde servo y angulo toman un valor ingresado
leer_DatoBT();//Definicion de funcion para administrar datos desde el monitor serial, donde servo y angulo toman un valor ingresad
//LLamar funciones

//2*
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
//Asignacion de cada servo a la variable entera "angulo" con respecto al caracter inicial   
}
//3*
motorBase.write(Base);
motorDerecha.write(Derecha);
motorIzquierda.write(Izquierda);
motorMano.write(Mano);
//Escrible en el servo el valor entero del angulo enviado
}
//1*
void leer_Dato()
{
  if (Serial.available() > 0) //Si se recibió un dato en el monitor serial 
  {
    servo = Serial.read();//Asigna al servo el caracter ingresado
    angulo = Serial.parseInt();//Asigna a la variable angulo el valor entero enviado
  }
}
//1.1*
void leer_DatoBT()
{
 
  BT.println(BT.read());
  
  if (BT.available() > 0)//Si se recibó un dato desde el BT
  {
    servo = BT.read();//Asigna al servo el caracter ingresado
    angulo = BT.parseInt();//Asigna a la variable angulo el valor entero enviado
    BT.println(servo);
  }else{
    BT.println("No se está recibiendo un Dato");
  }
  
}
