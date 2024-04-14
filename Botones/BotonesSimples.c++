#define LED 2
#define BOTON 3

void setup(){
  pinMode(LED,OUTPUT);
  pinMode(BOTON,INPUT);
  
}
void loop(){
  if(digitalRead(BOTON)==HIGH){
      digitalWrite(LED,HIGH); 
  }else{
      digitalWrite(LED, LOW);
  }
  
}