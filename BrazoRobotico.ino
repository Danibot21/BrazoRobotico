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
int pos = 0;
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
      case 'D':case 'd':
          Derecha = angulo;
          motorDerecha.write(Derecha);
      break;
      case 'I':case 'i':
          Izquierda = angulo;
          motorIzquierda.write(Izquierda);
      break;
      case 'M':case 'm':
          Mano = angulo;
          motorMano.write(Mano);
      break; 
      //Asignacion de cada servo a la variable entera "angulo" con respecto al caracter inicial  
      //Para luego escrible en el servo el valor entero del angulo enviado
      
      case 'y'://Caja de la mitad
      {  for (pos = 170; pos >=160; pos -=5)
      {motorMano.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      } 
      {  for (pos = 90; pos >=88; pos -=5)
      {motorBase.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      } 
      {  for (pos = 90; pos >=65; pos -=5)
      {motorIzquierda.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      } 
      {  for (pos = 100; pos <=145; pos +=5)
      {motorDerecha.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      }
      {  for (pos = 160; pos <=180; pos +=5)
      {motorMano.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      } 
      {  for (pos = 88; pos <=180; pos +=5)
      {motorBase.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      }
      {  for (pos = 65; pos <=120; pos +=5)
      {motorIzquierda.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      } 
      {  for (pos = 145; pos >=100; pos -=5)
      {motorDerecha.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      }     
      {  for (pos = 180; pos >=160; pos -=5)
      {motorMano.write(pos);
      delay (150); }
      delay (2000);
      servo='t';
      } 
      break;

      case 'l'://Caja 2 de la mitad
      {  for (pos = 170; pos >=160; pos -=5)
      {motorMano.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      } 
      {  for (pos = 90; pos >=88; pos -=5)
      {motorBase.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      } 
      {  for (pos = 90; pos >=55; pos -=5)
      {motorIzquierda.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      }  
      {  for (pos = 100; pos <=145; pos +=5)
      {motorDerecha.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      }
      {  for (pos = 160; pos <=180; pos +=5)
      {motorMano.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      } 
      {  for (pos = 55; pos >=40; pos -=5)
      {motorIzquierda.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      }
      {  for (pos = 88; pos <=180; pos +=5)
      {motorBase.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      }
      {  for (pos = 40; pos <=120; pos +=5)
      {motorIzquierda.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      } 
      {  for (pos = 145; pos >=100; pos -=5)
      {motorDerecha.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      }     
      {  for (pos = 180; pos >=160; pos -=5)
      {motorMano.write(pos);
      delay (150); }
      delay (2000);
      servo='t';
      } 
      break;
      
      case 'k'://Caja 3 de la mitad
      {  for (pos = 170; pos >=160; pos -=5)
      {motorMano.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      } 
      {  for (pos = 90; pos >=88; pos -=5)
      {motorBase.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      } 
      {  for (pos = 90; pos >=55; pos -=5)
      {motorIzquierda.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      }  
      {  for (pos = 100; pos <=135; pos +=5)
      {motorDerecha.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      }
      {  for (pos = 160; pos <=180; pos +=5)
      {motorMano.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      } 
      {  for (pos = 55; pos >=40; pos -=5)
      {motorIzquierda.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      }
      {  for (pos = 88; pos <=180; pos +=5)
      {motorBase.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      }
      {  for (pos = 40; pos <=120; pos +=5)
      {motorIzquierda.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      } 
      {  for (pos = 135; pos >=100; pos -=5)
      {motorDerecha.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      }     
      {  for (pos = 180; pos >=160; pos -=5)
      {motorMano.write(pos);
      delay (150); }
      delay (2000);
      servo='t';
      } 
      break;
     
      case 'x'://Caja de la izquierda
      {  for (pos = 170; pos >=160; pos -=5)
      {motorMano.write(pos);
      delay (150); }
      delay (2000);
      servo='t';
      }
      {  for (pos = 90; pos <=125; pos +=5)
      {motorBase.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      }
      {  for (pos = 90; pos <=130; pos +=5)
      {motorIzquierda.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      } 
      {  for (pos = 100; pos <=180; pos +=5)
      {motorDerecha.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      }
      {  for (pos = 130; pos <=165; pos +=5)
      {motorIzquierda.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      } 
      {  for (pos = 160; pos <=180; pos +=5)
      {motorMano.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      }
      {  for (pos = 180; pos >=100; pos -=5)
      {motorDerecha.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      }
      {  for (pos = 125; pos <=180; pos +=5)
      {motorBase.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      }
      {  for (pos = 180; pos >=160; pos -=5)
      {motorMano.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      }
      break;
      
      case 'n'://Caja 2 de la izquierda
      {  for (pos = 170; pos >=160; pos -=5)
      {motorMano.write(pos);
      delay (150); }
      delay (2000);
      servo='t';
      }
      {  for (pos = 90; pos <=125; pos +=5)
      {motorBase.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      }
      {  for (pos = 90; pos <=130; pos +=5)
      {motorIzquierda.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      } 
      {  for (pos = 100; pos <=170; pos +=5)
      {motorDerecha.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      }
      {  for (pos = 130; pos <=170; pos +=5)
      {motorIzquierda.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      } 
      {  for (pos = 160; pos <=180; pos +=5)
      {motorMano.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      } 
      {  for (pos = 170; pos >=100; pos -=5)
      {motorDerecha.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      }
      {  for (pos = 125; pos <=180; pos +=5)
      {motorBase.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      }
      {  for (pos = 180; pos >=160; pos -=5)
      {motorMano.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      }
      break;
      
      case 'p'://Caja 3 de la izquierda
      {  for (pos = 170; pos >=160; pos -=5)
      {motorMano.write(pos);
      delay (150); }
      delay (2000);
      servo='t';
      }
      {  for (pos = 90; pos <=125; pos +=5)
      {motorBase.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      }
      {  for (pos = 90; pos <=130; pos +=5)
      {motorIzquierda.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      } 
      {  for (pos = 100; pos <=170; pos +=5)
      {motorDerecha.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      }
      {  for (pos = 130; pos <=180; pos +=5)
      {motorIzquierda.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      } 
      {  for (pos = 160; pos <=180; pos +=5)
      {motorMano.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      }
      {  for (pos = 170; pos >=100; pos -=5)
      {motorDerecha.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      }
      {  for (pos = 125; pos <=180; pos +=5)
      {motorBase.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      }
      {  for (pos = 180; pos >=160; pos -=5)
      {motorMano.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      }
      break;
      
      case 'z'://Caja de la derecha
      {  for (pos = 170; pos >=160; pos -=5)
      {motorMano.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      }
      {  for (pos = 90; pos >=45; pos -=5)
      {motorBase.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      }
      {  for (pos = 90; pos <=130; pos +=5)
      {motorIzquierda.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      } 
      {  for (pos = 100; pos <=180; pos +=5)
      {motorDerecha.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      }
      {  for (pos = 130; pos <=165; pos +=5)
      {motorIzquierda.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      } 
      {  for (pos = 160; pos <=180; pos +=5)
      {motorMano.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      }
      {  for (pos = 170; pos >=100; pos -=5)
      {motorDerecha.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      }
      {  for (pos = 45; pos <=180; pos +=5)
      {motorBase.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      }
      {  for (pos = 180; pos >=160; pos -=5)
      {motorMano.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      }
      break;


      case 'o'://Caja 2 de la derecha
      {  for (pos = 170; pos >=160; pos -=5)
      {motorMano.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      }
      {  for (pos = 90; pos >=45; pos -=5)
      {motorBase.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      }
      {  for (pos = 90; pos <=130; pos +=5)
      {motorIzquierda.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      } 
      {  for (pos = 100; pos <=170; pos +=5)
      {motorDerecha.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      }
      {  for (pos = 130; pos <=170; pos +=5)
      {motorIzquierda.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      } 
      {  for (pos = 160; pos <=180; pos +=5)
      {motorMano.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      }
      {  for (pos = 170; pos >=100; pos -=5)
      {motorDerecha.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      }
      {  for (pos = 45; pos <=180; pos +=5)
      {motorBase.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      }
      {  for (pos = 180; pos >=160; pos -=5)
      {motorMano.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      }
      break;


      case 'q'://Caja 3 de la derecha
      {  for (pos = 170; pos >=160; pos -=5)
      {motorMano.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      }
      {  for (pos = 90; pos >=45; pos -=5)
      {motorBase.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      }
      {  for (pos = 90; pos <=130; pos +=5)
      {motorIzquierda.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      } 
      {  for (pos = 100; pos <=170; pos +=5)
      {motorDerecha.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      }
      {  for (pos = 130; pos <=180; pos +=5)
      {motorIzquierda.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      } 
      {  for (pos = 160; pos <=180; pos +=5)
      {motorMano.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      }
      {  for (pos = 170; pos >=100; pos -=5)
      {motorDerecha.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      }
      {  for (pos = 45; pos <=180; pos +=5)
      {motorBase.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      }
      {  for (pos = 180; pos >=160; pos -=5)
      {motorMano.write(pos);
      delay (150); }
      delay (1000);
      servo='t';
      }
      break;

      
    }
}

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
