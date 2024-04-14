#define LED_R 12
#define LED_V 13
#define LED_A 11

unsigned log tir,tiv,tiv,ta;
bool edoLedVerde = false;
setup(){
    pinmode(LED_R, OUTPUT);
    pinmode(LEF_V, OUTPUT);
    pinmode(LED_A, OUTPUT) ;
    tir = millis();
    tiv = millis();
    tiA = millis();

}
loop(){
    ta = millis();
    if((ta-tiv)>=10000){//cada10 segundos
    tiv = ta;
    edoLedVerde = !edoLedVerde;
    digitalWrite(LED_v,edoLedVerde);
    }

}