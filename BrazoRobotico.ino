#include <Servo.h>
#include <SoftwareSerial.h>

Servo motorBase, motorDerecha, motorIzquierda, motorMano; //Declaracion de los nombres de los 4 servos
SoftwareSerial BT(2,3); // pin del modulo BT

void leer_DatoBT(); //Declaracion de funcion para administrar datos desde el modulo BT
void leer_Dato(); //Declaracion de funcion para administrar datos desde el monitor serial  

void setup() {
    Serial.begin(9600);
    BT.begin(9600);
    motorBase.attach(12);
    motorDerecha.attach(11);
    motorIzquierda.attach(10);
    motorMano.attach(9);
    //Declaracion de pines de los servos
}

char servo;
int angulo;
int Base,Derecha,Izquierda,Mano;
//Declaracion de variables globales para capturar datos ingresados mediante monitor o BT


void loop() 
{
    leer_Dato();//Definicion de funcion para administrar datos desde el modulo BT, donde servo y angulo toman un valor ingresado
    leer_DatoBT();//Definicion de funcion para administrar datos desde el monitor serial, donde servo y angulo toman un valor ingresad
    //LLamar funciones

        //2*
    switch(servo)
    {
      case 'B':case 'b':
          Base = angulo;
          motorBase.write(Base);
      break;
      case 'D':
          Derecha = angulo;
          motorDerecha.write(Derecha);
      break;
      case 'I':
          Izquierda = angulo;
          motorIzquierda.write(Izquierda);
      break;
      case 'M':
          Mano = angulo;
          motorMano.write(Mano);
      break;
      //Asignacion de cada servo a la variable entera "angulo" con respecto al caracter inicial   
    }
//3*



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
   
  if (BT.available() > 0)//Si se recibó un dato desde el BT
  {
    servo = BT.read();//Asigna al servo el caracter ingresado
    angulo = BT.parseInt();//Asigna a la variable angulo el valor entero enviado
    Serial.println(servo);
    Serial.println(angulo);
  }
  
}
