#include "pbutton.h"

PButton button; // wired A0  ->   Push Button ->   GND

void setup()
{
  Serial.begin(57600);

  button.attach(A0, true, true);   // pin = A0 , use internal pullup resistor = true, inverted logic = true
}

void loop()
{
  if (button.isClicked()) 
  {
    Serial.println("Button is clicked");
  }

  if (button.isReleased())
  {
    Serial.println("Button is released");
  }
  delay(5);  
}
