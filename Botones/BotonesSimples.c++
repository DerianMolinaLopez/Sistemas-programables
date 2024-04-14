#define LED 2 // Pin del LED
#define BOTON 3 // Pin del botón

void setup(){
    pinMode(LED, OUTPUT); // Configura el pin del LED como salida
    pinMode(BOTON, INPUT); // Configura el pin del botón como entrada
}

void loop(){
    if(digitalRead(BOTON) == HIGH){ // Lee el estado del botón
        digitalWrite(LED, HIGH); // Si el botón está presionado, enciende el LED
    }else{
        digitalWrite(LED, LOW); // Si el botón no está presionado, apaga el LED
    }
}