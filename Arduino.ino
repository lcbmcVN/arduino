/*************************************** 
Waveshare AlphaBot Car Run Test

CN: www.waveshare.net/wiki/AlphaBot
EN: www.waveshare.com/wiki/AlphaBot
****************************************/
#include "AlphaBot.h" 

AlphaBot Car = AlphaBot(); 
char val;

void setup()
{
  Serial.begin(9600);
  // L char
  Car.SetSpeed(500); 
  Car.Forward(2000);
  Car.Brake();
  Car.Right(400);
  Car.Forward(1000);
  Car.Brake();
  Car.Forward(500);
  Car.Brake();

  // O char
  Car.Forward(1000);
  Car.Brake();
  Car.Right(400);
  Car.Forward(2000);
  Car.Brake();
  Car.Right(400);
  Car.Forward(1000);
  Car.Brake();
  Car.Right(400);
  Car.Forward(2000);
  Car.Brake();
  Car.Right(400);
  Car.Forward(1000);
  Car.Brake();
  Car.Forward(500);
  Car.Brake();

  // N char
  Car.Right(400);
  Car.Forward(2000);
  Car.Left(666);
  Car.Forward(2236);
  Car.Brake();
  Car.Right(666);
  Car.Forward(2000);
  Car.Brake();
  Car.Left(400);
  
}

void loop()
{  
  while (Serial.available()>0)  {
    val=Serial.read();// Read the value sent by Bluetooth
    Serial.print(val);// The serial port prints the read value
  }
}
