// encender el led cada segundo
#define LED_R 12
#define LED_v 13
bool edo_ledr,edo_ledr, ratardo_rojo,retardo_v = false;
unsigned log ti, ta, tir, tiv;
setup()
{
    pinmode(LED_R, OUTPUT);
    ti = millis();
}
loop()
{
    ta = millis();
    if (!retardo_rojo)
    {
        if ((ta - tir) = > 750)
        {
            retardo_rojo = true;
            tir = ta;
        }
    }
    if (!retardo_v)
    {
        if ((ta - tir) = > 10000)
        {
            retardo_v = true;
            tir = ta;
        }
    }
    if (!retardo_rojo)
    {
        if((ta-tir)>=250){
            edo_ledv =!edo_ledv;
            digitalWrite(LED_R,edo_ledv);
            tiv = ta;
        }
    }

    if (retardo_rojo)
    {
        if((ta-tir)>=1000){
            edo_ledr =!edo_ledr;
            digitalWrite(LED_R,edo_ledr);
            tir = ta;
        }
    }
    // primero hacemos el
}