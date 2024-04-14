/*
Simular el uso del apagado de un carro,
supongamos que el carroe sta encendido y las luces igualmente
cuando se apaga el caror, depsues de 5 segundos
las luces se apagan

simular el mismo comportamiento pero con un boton y un led
*/
#define LED 3
#define BOTON 4

unsigned long ta, ti;
bool botonPresionado = false;

void setup(){
    pinMode(BOTON,INPUT);
    pinMode(LED,OUTPUT);
}

void loop(){
    ta = millis();
    if(digitalRead(BOTON)==HIGH){
        botonPresionado = true;
        digitalWrite(LED,HIGH);
    }
    if(digitalRead(BOTON)==LOW && botonPresionado){
        if (ti == 0) {  // Verifica si ti es igual a cero
    ti = ta;    // Asigna el valor actual de ta a ti
}
 // Inicia el temporizador cuando se suelta el botón
        if((ta-ti)>=2000){
            digitalWrite(LED,LOW);
            botonPresionado = false;
            ti = 0; // Reinicia el temporizador
        }
    }
}
// !ti será verdadero si ti es cero