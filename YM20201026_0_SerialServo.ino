//OCT26 2020 T.I. Fixied incorrect init version

#include<Servo.h>

Servo servo_0;
Servo servo_1;
Servo servo_2;

int pin_s0=9;
int pin_s1=10;
int pin_s2=11;

Servo servo_n[3]; 

int incomingChar = 0;

void setup() {
  // put your setup code here, to run once:

    Serial.setTimeout(50);
    Serial.begin(9600);

    servo_0.attach(pin_s0);
    servo_1.attach(pin_s1);
    servo_2.attach(pin_s2);
}

void loop() {
  
  // put your main code here, to run repeatedly:

  incomingChar=0;
  if (Serial.available() > 0) 
  {
    // read the incoming byte:
    incomingChar = Serial.read();
  }

  if('1'==incomingChar)
  {
     Serial.println("rock");
  }
  else
  {
      

  }

  if('2'==incomingChar)
  {
     Serial.println("scissors");
  }
  else
  {

  }

  if('3'==incomingChar)
  {
     Serial.println("paper");
  }
  else
  {

  }
  
}
