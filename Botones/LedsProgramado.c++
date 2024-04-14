/*

un programa que dado a un led, que al precionarse, tenga una programacion, y cuando
se vuelva aprecionar, que tenga otra
por ejemplo que cuando se preciones, qeu empiece a parpadear cada 2 segundos

y cuando se vuelva a precionar, que parpadee unos 5 segundos
*/


*/
#define LED 3
#define BOTON 4

bool botonPrecionado = false;
bool estado = true;
bool edoLed = false;
unsigned long ti,ta;
void setup(){
    pinMode(BOTON,INPUT);
    pinMode(LED,OUTPUT);
}
void loop(){
    ta=millis();
    if(digitalRead(BOTON)==HIGH){
        botonPrecionado = !botonPrecionado;
        estado = !estado;
    }
    //primera programacion
    if(botonPrecionado&&!estado){
        if(ta-ti>=500){
            ti=ta;
            edoLed = !edoLed;
            digitalWrite(LED,edoLed);
        }
    }
    //segunda programacion
    if(!botonPrecionado&&estado){
        if(ta-ti>=2000){
            ti=ta;
            edoLed = !edoLed;
            digitalWrite(LED,edoLed);
        }
    }
    
}