//OCT.20 2020 Added smaple for multi servos control
//OCT.20 2020 Created this file based on YM20201013_1_LED_MultiKeys

#include<Servo.h>

Servo servo_0;
Servo servo_1;
Servo servo_2;
int key_0=3;
int key_1=4;
int key_2=5;

int pin_s0=9;
int pin_s1=10;
int pin_s2=11;

void setup() {
  // put your setup code here, to run once:
  pinMode(key_0,INPUT_PULLUP);
  pinMode(key_1,INPUT_PULLUP);
  pinMode(key_2,INPUT_PULLUP);

  servo_0.attach(pin_s0);
  servo_1.attach(pin_s1,500,2400);
  servo_2.attach(pin_s2);
}

void loop() {


#if 1  
  // put your main code here, to run repeatedly:

  if(LOW==digitalRead(key_0))
  {
      servo_0.write(180);
      servo_1.write(180);
      servo_2.write(180);

  }
  else
  {
      

  }

  if(LOW==digitalRead(key_1))
  {
      servo_0.write(180);
      servo_1.write(0);
      servo_2.write(180);
  }
  else
  {

  }

  if(LOW==digitalRead(key_2))
  {
      servo_0.write(0);
      servo_1.write(0);
      servo_2.write(0);
  }
  else
  {

  }
#endif
}
