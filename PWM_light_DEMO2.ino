/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/

int Index = 0;
int up_down = 0;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(3 , OUTPUT);
}

// the loop function runs over and over again forever
void loop() {

  analogWrite(3, Index);
  delay(10);                 // wait for x millsecond

  if (Index == 255)
  {
    up_down = 1;
  }

  if (Index == 0)
  {
    up_down = 0;
  }

  if (up_down == 0)
  {
    Index = Index + 1;
  }
  else
  {
    Index = Index - 1;
  }

}
