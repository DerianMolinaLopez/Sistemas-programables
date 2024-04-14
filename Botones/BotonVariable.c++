    #define LED 3
    #define BOTON 4
    
    unsigned long ta, ti;
    bool botonPresionado = false;
    
    void setup(){
        pinMode(LED, OUTPUT);
        pinMode(BOTON, INPUT);
    }
    
    void loop(){
        ta = millis();
    
        if(digitalRead(BOTON) == HIGH){
            if(!botonPresionado){
                digitalWrite(LED, HIGH);
                ti = ta;
                botonPresionado = true;
            }
             //encendemos y apagamos el led por cada 3 segundos cada uno
            if((ta - ti) >= 3000){
                ti = ta;
                digitalWrite(LED, !digitalRead(LED));
            }
        } else {
            digitalWrite(LED, LOW);
            botonPresionado = false;
        }
    }