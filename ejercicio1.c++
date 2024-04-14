//encender el led cada segundo 
#define LED_R 12
bool edo_led = false;
unsigned log ti,ta;
setup(){
    pinmode(LED_R, OUTPUT);
    ti = millis();
}
loop(){
    ta = millis();

    if((ta-ti)>= 1000){
        edo_led = !edo_led;
        //digitalWrite(LED_R,!edo_led); -->tambien se peude asi
        digitalWrite(LED_R,!edo_led);
        ti=ta;
    }

}

