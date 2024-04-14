/*
doble presion en un boton

con un boton, que un led se encienda cuando se le precione
pero despues de que se le vuelva a precionar, que se apague
*/
#define LED 3
#define BOTON 4

bool botonPrecionado = false;
bool edoLed = false;
void setup(){
    pinMode(BOTON,INPUT);
    pinMode(LED,OUTPUT);
}
void loop(){
    if(digitalRead(BOTON)==HIGH){
        botonPrecionado = !botonPrecionado;
    }
    digitalWtite(LED,botonPrecionado);
    
}