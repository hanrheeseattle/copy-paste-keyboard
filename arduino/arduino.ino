#include "Keyboard.h"

//declaring button pins
const int buttonV = 6;
const int buttonC = 7;
const int buttonCtrl = 8;      
const int repeatRate = 150; // milliseconds

void setup() {
  //declare the buttons
  pinMode(buttonV, INPUT);
  pinMode(buttonC, INPUT);
  pinMode(buttonCtrl, INPUT);
  Keyboard.begin();
}

void loop() {
  //checking the state of buttons
  int stateV = digitalRead(buttonV);
  int stateC = digitalRead(buttonC);
  int stateCtrl = digitalRead(buttonCtrl);
  
  if (stateCtrl == HIGH && stateC == HIGH) 
  {
    // Copy!
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('c');
    delay(repeatRate);
    Keyboard.releaseAll();
  }
  else if (stateCtrl == HIGH && stateV == HIGH)
  {
    // Paste!
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('v');
    delay(repeatRate);
    Keyboard.releaseAll();
  }
  else if (stateCtrl == LOW && stateC == HIGH)
  {
    // Print C
    Keyboard.press('c');
    delay(repeatRate);
    Keyboard.releaseAll();   
  }
  else if (stateCtrl == LOW && stateV == HIGH)
  {
    // Print V
    Keyboard.press('v');
    delay(repeatRate);
    Keyboard.releaseAll();
  }
  else
  {
    //Keyboard.releaseAll();
    delay(repeatRate);
  }
}
