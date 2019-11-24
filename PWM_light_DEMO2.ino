int Index = 0;
int up_down = 0;

void setup() {
  pinMode(3 , OUTPUT);
}

void loop() {
  analogWrite(3, Index);
  delay(10); // wait for x millsecond

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
