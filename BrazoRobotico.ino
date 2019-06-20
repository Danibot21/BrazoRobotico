//Este programa mueve el motor de la Base mediante el bluetooth 
#include <Servo.h>
#include <SoftwareSerial.h>

int bluetoothTx = 8; // Declara el pin conectado del bluetooth
int bluetoothRx = 11;
#define motorBase 12 //Declaro pin de la base
#define motorDerecha 11
#define motorIzquierda 10
#define motorMano 9
Servo Base;
Servo Izquierda;
Servo Derecha;
Servo Mano;  
SoftwareSerial bluetooth(bluetoothTx, bluetoothRx); 

void setup() {
{
  Base.attach(12); 
  Serial.begin(9600);
  //Configuracion de conexion del bluetooth a la app en android
  bluetooth.begin(9600);
}
}
void loop() {
  //Recibe la informacion en el bluetooth
  if(bluetooth.available()> 0 ) //Recibe el grado en el bluetooth
  {
    int servopos = bluetooth.read(); // Guarda el grado recibido en servopos
    Serial.println(servopos); 
    Base.write(servopos); // gira el servo en el ángulo recibido desde la aplicación de Android
  }

}
