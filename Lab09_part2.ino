#include <IRremote.h>
const int buttonPin = 6;
int buttonState = 0;
IRsend irsend; // IRRemote限定使用數位腳位3

void setup()
{
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if(buttonState == HIGH){
    irsend.sendNEC(0x4FB48B7, 32);
    }
  }
