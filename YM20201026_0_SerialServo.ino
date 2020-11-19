//NOV21 2020 T.I. Removed unused variable
//NOV21 2020 T.I. Removed serail timeout setting, code refactoring
//OCT30 2020 T.I. code refactoring.
//OCT26 2020 T.I. Fixied incorrect init version

#include<Servo.h>

Servo servo_L;
Servo servo_M;
Servo servo_R;

// Serial cmds table
char Rock_chr='1';
char Scissors_chr='2';
char Paper_chr='3';



char incomingChar = 0;

void setup() {
  // put your setup code here, to run once:


    Serial.begin(9600);

    servo_L.attach(9);
    servo_M.attach(10);
    servo_R.attach(11);
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
     servo_L.write(0);
     servo_M.write(0);
     servo_R.write(0);
  }
  else if(Scissors_chr==incomingChar)
  {
     //Serial.println("scissors");
     servo_L.write(180);
     servo_M.write(180);
     servo_R.write(180);
  }
  else if(Paper_chr==incomingChar)
  {
     //Serial.println("paper");
  }

  
}
