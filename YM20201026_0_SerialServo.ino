//OCT30 2020 T.I. code refactoring.
//OCT26 2020 T.I. Fixied incorrect init version

#include<Servo.h>

Servo servo_0;
Servo servo_1;
Servo servo_2;

int pin_s0=9;
int pin_s1=10;
int pin_s2=11;

// Serial cmds table
char Rock_chr='1';
char Scissors_chr='2';
char Paper_chr='3';



char incomingChar = 0;

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

  if(Rock_chr==incomingChar)
  {
     //Serial.println("rock");
     servo_0.write(0);
     servo_1.write(0);
     servo_2.write(0);
  }
  else if(Scissors_chr==incomingChar)
  {
     //Serial.println("scissors");
     servo_0.write(180);
     servo_1.write(180);
     servo_2.write(180);
  }
  else if(Paper_chr==incomingChar)
  {
     //Serial.println("paper");
  }

  
}
