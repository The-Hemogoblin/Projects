#include <IRremote.hpp>  // new include style
#include <Servo.h>

#define RECV_PIN 2
IRrecv irrecv(RECV_PIN);
decode_results results;

Servo lightservo;
Servo fanservo;

void setup() {
  Serial.begin(9600);
  IrReceiver.begin(RECV_PIN, ENABLE_LED_FEEDBACK);

  lightservo.attach(6);
  fanservo.attach(3);

  lightservo.write(75); //75 = base  100 = ON  -- = OFF
  fanservo.write(120); //120 = base  90 = ON   -- = OFF

  Serial.println("Initialized");
}

void loop() {
  if (IrReceiver.decode()) {
    Serial.print("IR code: 0x");
    Serial.println(IrReceiver.decodedIRData.command, HEX);
    if (IrReceiver.decodedIRData.command == 0x45) { //LIGHT OFF
      lightservo.write(45);
      delay(300);
      lightservo.write(75);
    } else if(IrReceiver.decodedIRData.command == 0x47) { //LIGHT ON
      lightservo.write(100);
      delay(300);
      lightservo.write(75);
    } else if (IrReceiver.decodedIRData.command == 0x43) { //FAN ON
      fanservo.write(90);
      delay(300);
      fanservo.write(120);
    } else if (IrReceiver.decodedIRData.command == 0x44) { //FAN OFF
      fanservo.write(160);
      delay(300);
      fanservo.write(120);
    }
    IrReceiver.resume();
  }
}
