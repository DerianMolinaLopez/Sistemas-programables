// C++ code
//
#define LED_ROJO 12
bool edoLedRojo = false;
void setup()
{
  pinMode(LED_ROJO, OUTPUT);
}

void loop()
{
  edoLedRojo =!edoLedRojo;
  digitalWrite(LED_ROJO,edoLedRojo);
  delay(1000); // Wait for 1000 millisecond(s)
  edoLedRojo =!edoLedRojo;
  digitalWrite(LED_ROJO,edoLedRojo);
  delay(2000);
  // Wait for 1000 millisecond(s)
}