#include <LedControl.h>

const int DIN_PIN = 10;
const int CS_PIN = 11;
const int CLK_PIN = 12;

const uint64_t IMAGES[] = {

 
  0xfffffffffffffffe,

  0xfffffffffffffffc,

  0xfffffffffffffefc,

  0xfffffffffffefefc,
  //  0xfffffffffffefefc,
  0xfffffffffffefef8,
    0xfffffffffffefef8,
  0xfffffffffffefcf8,
 //   0xfffffffffffefcf8,
  0xfffffffffefefcf8,
   // 0xfffffffffefefcf8,
  0xfffffffefefefcf8,
    0xfffffffefefefcf8,
  0xfffffffefefefcf0,
    0xfffffffefefefcf0,
  0xfffffffefefcfcf0,
    0xfffffffefefcfcf0,
  0xfffffffefefcf8f0,
    0xfffffffefefcf8f0,
  0xfffffffefefcf0f0,
    0xfffffffefefcf0f0,
  0xfffffffefefcf0e0,
    0xfffffffefefcf0e0,
  0xfffffffefefcf0c0,
    //0xfffffffefefcf0c0,
  0xfffffffefefcf080,
    //0xfffffffefefcf080,
  0xfffffffefcfcf080,
    0xfffffffefcfcf080,
  0xfffffefefcfcf080,
    0xfffffefefcfcf080,
  0xfffefefefcfcf080,
    0xfffefefefcfcf080,
  0xfffefefcfcfcf080,
    0xfffefefcfcfcf080,
  0xfffefefcfcf8f080,
    0xfffefefcfcf8f080,
  0xfffefefcfcf0f080,
    0xfffefefcfcf0f080,
  0xfffefefcf8f0f080,
    0xfffefefcf8f0f080,
  0xfffefefcf8f0e080,
    0xfffefefcf8f0e080,
  0xfffefefcf8e0e080,
    0xfffefefcf8e0e080,
  0xfffefcfcf8e0e080,
    0xfffefcfcf8e0e080,
  0xfffefcfcf8e0c080,
    0xfffefcfcf8e0c080,
  0xfffefcf8f8e0c080,
    0xfffefcf8f8e0c080,
  0xfffefcf8f0e0c080,
    0xfffefcf8f0e0c080,
  0xfefefcf8f0e0c080,
    0xfefefcf8f0e0c080,
  0xfefcfcf8f0e0c080,
    0xfefcfcf8f0e0c080,
  0xfcfcfcf8f0e0c080,
    0xfcfcfcf8f0e0c080,
  0xfcfcfcf8f0e0c000,
    0xfcfcfcf8f0e0c000,
  0xfcfcfcf8f0e08000,
    0xfcfcfcf8f0e08000,
  0xfcfcfcf8f0e00000,
    0xfcfcfcf8f0e00000,
  0xfcfcfcf8f0c00000,
    0xfcfcfcf8f0c00000,
  0xfcfcf8f8f0c00000,
    0xfcfcf8f8f0c00000,
  0xfcfcf8f8e0c00000,
    0xfcfcf8f8e0c00000,
  0xfcfcf8f0e0c00000,
    0xfcfcf8f0e0c00000,
  0xfcf8f8f0e0c00000,
    0xfcf8f8f0e0c00000,
  0xf8f8f8f0e0800000,
    0xf8f8f8f0e0800000,
  0xf8f8f8f0e0000000,
    0xf8f8f8f0e0000000,
  0xf8f8f0f0e0000000,
    0xf8f8f0f0e0000000,
  0xf8f8f0e0e0000000,
    0xf8f8f0e0e0000000,
  0xf8f8f0e0c0000000,
    0xf8f8f0e0c0000000,
  0xf8f0f0e0c0000000,
    0xf8f0f0e0c0000000,
  0xf8f0f0e080000000,
    0xf8f0f0e080000000,
  0xf8f0e0e080000000,
    0xf8f0e0e080000000,
  0xf8f0e0c080000000,
    0xf8f0e0c080000000,
  0xf0f0e0c080000000,
    0xf0f0e0c080000000,
  0xf0f0e0c000000000,
    0xf0f0e0c000000000,
  0xf0e0e0c000000000,
    0xf0e0e0c000000000,
  0xf0e0c0c000000000,
    0xf0e0c0c000000000,
  0xf0e0c08000000000,
    0xf0e0c08000000000,
  0xf0e0c00000000000,
    0xf0e0c00000000000,
  0xe0e0c00000000000,
    0xe0e0c00000000000,
  0xe0c0c00000000000,
    0xe0c0c00000000000,
  0xe0c0800000000000,
    0xe0c0800000000000,
  0xc0c0800000000000,
  //  0xc0c0800000000000,
  0xc0c0000000000000,

  0xc080000000000000,

  0x8080000000000000,

  0x8000000000000000,

  0x0000000000000000,

  };
 const uint64_t IMAGES2[] = {


  0x0000000000000200,
 // 0x0000000000040001,
  0x0000000008000200,
  0x0000001000040001,
  0x0000200008000200,
  0x0040001000040001,
  0x8000200008000200,
  0x8040001000040001,
  0xc000200008000200,
  0xc040001000040001,
  0xc080200008000200,
  0xc0c0001000040001,
  0xe080200008000200,
  0xe0c0001000040001,
  0xe0c0200008000200,
  0xe0c0801000040001,
  0xe0c0a00008000200,
  0xe0e0801000040001,
  0xe0e0a00008000200,
  0xe0e0c01000040001,
  0xe0e0a08008000200,
  0xe0e0c09000040001,
  0xe0e0e08008000200,
  0xf0e0c09000040001,
  0xf0e0e08008000200,
  0xf0f0c09000040001,
  0xf8e0e08008000200,
  0xf8f0c09000040001,
  0xf8f0e08008000200,
  0xf8f0c0d000040001,
  0xf8f0e08088000200,
  0xf8f0c0d080040001,
  0xf8f0e0c088000200,
  0xf8f0e0d080040001,
  0xf8f0e0e088000200,
  0xf8f0e0d0c0040001,
  0xf8f0e0e088800200,
  0xf8f0e0d0c0840001,
  0xf8f0f0c0c8800200,
  0xf8f0f0d0c0840001,
  0xf8f0f0e0c8800200,
  0xf8f0f0f0c0840001,
  0xf8f8f0e0c8800200,
  0xf8f8f0f0c0840001,
  0xf8f8f8e0c8800200,
  0xf8f8f8f0c0840001,
  0xfcf8f0f0c8800200,
  0xfcf8f0f8c0840001,
  0xfcf8f8f0c8800200,
  0xfcf8f8f0d0840001,
  0xfcf8f8f0e8800200,
  0xfcf8f8f0f0840001,
  0xfcf8f8f0e8a00200,
  0xfcf8f8f0f0c40001,
  0xfcf8f8f0e0a48001,
  0xfcf8f8f0e8c08200,
  0xfcf8f8f0f0c48001,
  0xfcf8f8f0e8e08200,
  0xfcf8f8f0f0c4c001,
  0xfcf8f8f0e8e08280,
  0xfcf8f8f8e0c4c081,
  0xfcf8fcf0e8c0c280,
  0xfcfcf8f8e0c4c081,
  0xfef8fcf0e8c0c280,
  0xfefcf8f8e0c4c081,
  0xfefcf8f8e8c0c280,
  0xfefcf8f8f0c4c081,
  0xfefcf8f8f8c0c280,
  0xfefcf8f8f0d4c081,
  0xfefcf8f8f0f4c081,
  0xfefcf8f8f8e0e280,
  0xfefcf8f8f0f4c0c1,
  0xfefcf8f8f8e0e2c0,
  0xfefcf8fcf0e4e0c1,
  0xfefcfcf8f8e0e2c0,
  0xfefef8fcf0e4e0c1,
  0xfffcfcf8f8e0e2c0,
  0xfffcfcf8f8e4e0c1,
  0xfffcfcf8fce0e2c0,
  0xfffcfcfcf8e4e0c1,
  0xfffcfef8f8e8e2c0,
  0xfffefcf8f8f4e0c0,
  0xfffefcf8fcf0e2c0,
  0xfffefcfcf8f4e0c1,
  0xfffefcfcfcf0e2c0,
  0xfffefcfcfcf4e0c1,
  0xfffefcfcfcf8e2c0,
  0xfffefcfcfcfce0c1,
  0xfffefcfcfcfce2c0,
  0xfffefcfcfcfee0c1,
  0xfffefcfcfefce2c0,
  0xfffefcfefcfce4c1,
  0xfffefefcfcfceac0,
  0xfffffcfcfcfef0c1,
  0xfffffcfcfefce0e1,
  0xfffffcfefef8e2e0,
  0xfffffefefcfce0e1,
  0xfffffefefcfce2e0,
  0xfffffefefcfce4e1,
  0xfffffefefcfceae0,
  0xfffffefefcfcf4e1,
  0xfffffefefcfcfae0,
  0xfffffefefcfef0f1,
  0xfffffefefefcf2f0,
  0xfffffefffcfcf4f1,
  //0xfffffffefcfcfaf0,
  0xfffffffefcfef8f1,
  0xfffffffefefcfaf0,
  0xfffffffefefef8f1,
  0xfffffffefffcfaf0,
  0xfffffffffefcfcf1,
  0xfffffffffefcfef0,
  0xfffffffffefefcf1,
  0xfffffffffefefef0,
  0xfffffffffefefef1,
  0xfffffffffefefff0,
  0xfffffffffefffef1,
//  0xfffffffffffefef2,
  0xfffffffffffefef5,
  0xfffffffffffefff8,
  0xfffffffffffffef9,
  0xfffffffffffffefa,
  0xfffffffffffffefd,
 // 0xfffffffffffffefe,



};
const int IMAGES_LEN = sizeof(IMAGES)/8;
const int IMAGES_LEN2 = sizeof(IMAGES2)/8;



LedControl display = LedControl(DIN_PIN, CLK_PIN, CS_PIN, 2);


void setup() {
  display.clearDisplay(0);
  display.clearDisplay(1);
  display.shutdown(0, false);
  display.shutdown(1, false);
  display.setIntensity(0, 2);
  display.setIntensity(1,2);
}

void displayImage(uint64_t image) {
  for (int i = 0; i < 8; i++) {
    byte row = (image >> i * 8) & 0xFF;
    for (int j = 0; (j < 8); j++) {
      display.setLed(0, i, j, bitRead(row, j));
    }
  }
}

void displayImage2(uint64_t image) {
  for (int o = 0; o < 8; o++) {
    byte row = (image >> o * 8) & 0xFF;
    for (int k = 0; k < 8; k++) {
      display.setLed(1, o, k, bitRead(row, k));
    }
  }
}


int i = 0;
int o = 0;

void loop() {
  displayImage(IMAGES[i]);
  if (++i >= IMAGES_LEN ) {
    i = 0;
  }
    displayImage2(IMAGES2[i]);
  if (++o >= IMAGES_LEN2 ) {
    o = 0;
  }
  delay(100);
}
