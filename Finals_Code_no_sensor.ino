#include <Servo.h>

#define Motor1Pin D2
#define Motor2Pin D3

Servo motor1;
Servo motor2;

int throttle = 29;
int baseLeft = 82;
int baseRight = 90;

void forw(int time);
void back(int time);
void left(int time);
void right(int time);
void stop(int time);

void setup() {
  motor1.attach(Motor1Pin);
  motor2.attach(Motor2Pin);

  delay(10000);
  right(450);
  stop(250);
  forw(1600);
  stop(500);
  left(450);
  forw(2600);
  stop(250);

  delay(5000);
  back(350);
  stop(500);
  right(450);
  forw(2020);
  stop(500);
  right(450);
  forw(3000);
  stop(250);
}

void forw(int time){
  motor1.write(baseLeft+throttle);
  motor2.write(baseRight-throttle);
  delay(time);
}

void back(int time){
  motor1.write(baseLeft-throttle);
  motor2.write(baseRight+throttle);
  delay(time);
}

void left(int time){
  motor1.write(0);
  motor2.write(0);
  delay(time);
}

void right(int time){
  motor1.write(180);
  motor2.write(180);
  delay(time);
}

void stop(int time){
  motor1.write(90);
  motor2.write(90);
  delay(time);
}
void loop() {
  // put your main code here, to run repeatedly:

}
