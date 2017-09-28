# RobotBipedoArduino
#include <DynamixelSerial.h>

void setup(){
  Dynamixel.begin(1000000,2);  // Inicialize the servo at 1Mbps and Pin Control 2
  delay(1000);
}

void loop(){
  Inicial_position(50,250,400);
  Right();
  Inicial_position(50,250,400);
  Left();

}

void Inicial_position(int T_Get_Up,int Speed_Get_up,int Torque_Val){
  // Position the robot fully straight
  // (All engines in position 0)

  // Right leg
  Dynamixel.moveSpeed(1,512,Speed_Get_up);
  delay(T_Get_Up);
  Dynamixel.moveSpeed(2,512,Speed_Get_up);  
  delay(T_Get_Up);
  Dynamixel.moveSpeed(3,512,Speed_Get_up);
  delay(T_Get_Up);
  Dynamixel.moveSpeed(4,512,Speed_Get_up);  
  delay(T_Get_Up);
  Dynamixel.moveSpeed(5,512,Speed_Get_up);
  delay(T_Get_Up);
  Dynamixel.moveSpeed(6,512,Speed_Get_up);
  delay(T_Get_Up);
  Dynamixel.moveSpeed(7,512,Speed_Get_up);
  delay(T_Get_Up);
  Dynamixel.moveSpeed(8,512,Speed_Get_up);
  delay(T_Get_Up);
  Dynamixel.moveSpeed(9,512,Speed_Get_up);
  delay(T_Get_Up);
  Dynamixel.moveSpeed(10,512,Speed_Get_up);
  delay(T_Get_Up);
}

void Right(){
  Dynamixel.moveSpeed (10,449,300);  //
  Dynamixel.moveSpeed (9,442,300);  //
  Dynamixel.moveSpeed (8,494,300);  //
  delay(50);
  Dynamixel.moveSpeed (2,544,100);  //
  Dynamixel.moveSpeed (5,424,100);  //
  Dynamixel.moveSpeed (3,444,100);  //
  delay(50);
  Dynamixel.moveSpeed (8,414,80);  //
  Dynamixel.moveSpeed (6,604,80);  //
  delay(50);
  Dynamixel.moveSpeed (9,534,80);  //
  Dynamixel.moveSpeed (10,539,80);  //
  Dynamixel.moveSpeed (7,544,80);  //
  delay(50);
}



void Left(){

  Dynamixel.moveSpeed (9,575,300);  //
  Dynamixel.moveSpeed (10,582,300);  //
  Dynamixel.moveSpeed (7,530,300);  //
  delay(50);
  Dynamixel.moveSpeed (1,480,100);  //
  Dynamixel.moveSpeed (6,600,100);  //
  Dynamixel.moveSpeed (4,580,100);  //
  delay(50);
  Dynamixel.moveSpeed (7,610,80);  //
  Dynamixel.moveSpeed (5,420,80);  //
  delay(50);
  Dynamixel.moveSpeed (10,490,80);  //
  Dynamixel.moveSpeed (9,485,80);  //
  Dynamixel.moveSpeed (8,480,80);  //
  delay(50);
}
