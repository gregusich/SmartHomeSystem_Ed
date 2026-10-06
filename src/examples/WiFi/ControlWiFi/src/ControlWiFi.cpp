#include <shs_ControlWiFi.h>
#include <shs_debug.h>


void setup()
{
    dinit();

    if (shs::ControlWiFi::connectWiFiWait(20000, "ESP_TEST", "OLD_Market#6628")) { doutln("WiFi successfully connected.");}
    else                                     { doutln("WiFi connection error!");}
    shs::ControlWiFi::localIP();
}


void loop()
{

}