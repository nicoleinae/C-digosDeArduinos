#include <Servo.h>

Servo myservo;  // create Servo object to control a servo

const int speed1 = 7;
const int speed2 = 2;
int val45 = 45;  
int val135 = 135;

void setup() {
  myservo.attach(10);
  pinMode(speed2, INPUT_PULLUP);
  pinMode(speed1, INPUT_PULLUP);
  myservo.write(val45);
}

void loop() {
  if(digitalRead(speed1)== LOW){
    myservo.write(val135);
    delay(500);
    myservo.write(val45);
    delay(500);
  }

  if(digitalRead(speed2) == LOW){
    myservo.write(val135);
    delay(1000);
    myservo.write(val45);
    delay(1000);
  }

}
