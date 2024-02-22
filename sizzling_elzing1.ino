// C++ code
//
#define LED_ROJO 12
//encender un simple led
void setup()
{
  pinMode(LED_ROJO, OUTPUT);
}

void loop()
{
  digitalWrite(LED_ROJO,true);
  delay(1000);
}