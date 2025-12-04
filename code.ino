#include <AFMotor.h>

#define trigPin A1
#define echoPin A0

AF_DCMotor motor1(1); // Left Front
AF_DCMotor motor2(2); // Left Back
AF_DCMotor motor3(3); // Right Back
AF_DCMotor motor4(4); // Right Front

void setup() {
  Serial.begin(9600);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  motor1.setSpeed(150);
  motor2.setSpeed(150);
  motor3.setSpeed(150);
  motor4.setSpeed(150);

  Serial.println("Obstacle → Back → Turn LEFT");
}

void loop() {
  long distance = getDistance();
  Serial.print("Distance: ");
  Serial.println(distance);

  if (distance > 10) {
    forward();
  } 
  else {
    Stop();
    delay(200);

    // ----------  move BACKWARD ----------
    backward();
    delay(700); // ≈15 см
    Stop();
    delay(200);

    // ----------  turn LEFT ----------
    turnLeft();
    delay(600);
    Stop();
    delay(200);
  }

  delay(80);
}

/* ------- FUNCTIONS ---------- */

long getDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH);
  long cm = duration / 29 / 2;
  return cm;
}


void forward() {
  motor1.run(FORWARD);  // left front
  motor2.run(FORWARD);  // left back
  motor3.run(BACKWARD); // right back (reversed)
  motor4.run(BACKWARD); // right front (reversed)
}

void backward() {
  motor1.run(BACKWARD);
  motor2.run(BACKWARD);
  motor3.run(FORWARD); 
  motor4.run(FORWARD); 
}

void turnLeft() {
  motor1.run(BACKWARD);
  motor2.run(BACKWARD);
  motor3.run(BACKWARD); // right side reversed
  motor4.run(BACKWARD);
}

void Stop() {
  motor1.run(RELEASE);
  motor2.run(RELEASE);
  motor3.run(RELEASE);
  motor4.run(RELEASE);
}
