
/*
!un programa que cambie de modo cada vez
!que el boton es precionado
!por ejemplo cuando se preciona
!el primer modo de luz se activa
!si volvemos a precionar, cambia el modo al siguiente programado




? NUEVO MODO
agregar un modo en el que simule ser la foco trasero de un foco trasero de una
bici a la hora de frenar

se requiere otro boton 
*/
#define BOTON 2
#define BOTONFRENO 4
#define LED_FRENO 5
#define LED 
bool edoAnt,edoAct;
bool edoLed=false;
bool edoLedFreno = false,
unsigned char modoLED = led;

void setup(){
    pinmode(LED,OUTPUT);
    pinMode(BOTON,INPUT);
    pinMode(LED,output);
    pinmode(LED_FRENO,OUTPUT);
    pinMode(LEDFRENO);
    edoAnt = digitalRead(BOTON);
}

void loop(){
    edoActu = digitalRead(BOTON);
    ta = millis();//recuperamso el tiempo actual
    // se presiono el boton?+
    if(edoAct && !edoAnt){
        if(++modoLED==3)[
            modoLED = 0;
        ]
    }
    switch(modoLED){
        case 0:
            edoLed=false;
            break
        case 1:
        edoLed = ture;
            break;
        case 2:
            ti=ta;
            break

    }
    if(modoLED ==2){
        if((ta=ti)=>)[
            ti=ta;
            edoLed = !edoLed;
            digitalWrite(LED,edoLed);
        ]
    }
    //la parte del boton del freno
        digitalWrite(BOTONFRENO,edoLedFreno);
        edoAnt = edoAct;
}