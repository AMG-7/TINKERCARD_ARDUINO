#define led 11
#define poten A3

void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
  int potenValue = analogRead(poten);
  int brightness = potenValue / 4;
  analogWrite(led, brightness);
}
