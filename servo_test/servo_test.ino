// rc_servo_sample1

#include <Servo.h>

Servo myservo, myservo1, myservo2;

int pos = 0;

void setup()
{
  myservo.attach(9);
  myservo1.attach(10);
  myservo2.attach(11);
}

void loop()
{
  for (pos = 0; pos < 15; pos += 1)
  {
    myservo.write(pos);
    delay(100);
  }
  for (pos = 15; pos > 0; pos -= 1)
  {
    myservo.write(pos);
    delay(100);
  }
  myservo1.write(90);
  myservo2.write(180);
}
