// C++ code
//
#define LED_V 13
#define LED_R 12
bool edoLedR = false;
bool edoLedV = false;
bool retardo_R = false;
bool retardo_V = false;
unsigned long tir,tiv,ta;
void setup()
{
  pinMode(LED_V, OUTPUT);
  pinMode(LED_R, OUTPUT);
  tir = millis();
  tiv = millis();
}
void loop()
{
  ta = millis();
  if(!retardo_R){//aqui deben de ser 10 segundos
    if((ta-tir)>=10000){
      tir = ta;
      retardo_R = !retardo_R;
    }
  }
  if(retardo_R){
    if((ta-tir)>=2000){
      tir =ta;
      edoLedR = !edoLedR;
      digitalWrite(LED_R,edoLedR);
    }
  }
  /**********************/
  if(!retardo_V){//aqui deben de ser 10 segundos
    if((ta-tiv)>=3000){
      tiv = ta;
      retardo_V = !retardo_V;
    }
  }
  if(retardo_V){
    if((ta-tiv)>=500){
      tiv=ta;
      edoLedV =!edoLedV;
      digitalWrite(LED_V,edoLedV);
     
    }else if((ta-tiv)>=5000){
       tiv = ta;
       edoLedV =!edoLedV;
       digitalWrite(LED_V,edoLedV);
      
    }
  }
}

