#include <Stepper.h>

const int stepsPerRevolution = 2480;  

Stepper myStepper(stepsPerRevolution, 2, 4, 3, 5);
void setup() {
  // put your setup code here, to run once:
  //In 1 = Pin D2
  //In 2 = Pin D3
  //In 3 = Pin D4
  //In 4 = Pin D5
  myStepper.setSpeed(12.5);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

    // step one revolution  in one direction:
  Serial.println("clockwise");
  myStepper.step(stepsPerRevolution);
  delay(500);

  // step one revolution in the other direction:
  Serial.println("counterclockwise");
  myStepper.step(-stepsPerRevolution);
  delay(500);

}
