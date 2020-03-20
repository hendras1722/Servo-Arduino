#include <Servo.h>
#define potensioPin A0
Servo myservo;

int val;

void setup(){
myservo.attach(5);
}

void loop(){
val = analogRead(potensioPin);
val =map(val, 0, 1023, 90, 0);
myservo.write(val);
delay(15);
}
 
