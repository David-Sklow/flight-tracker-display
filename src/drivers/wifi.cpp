/**
 * Handles wifi/wireless setup and connection.
 * Makes connection accessible to other files/tasks such as the ADSB data task
 */

#include "wifi.hpp"
#include <WiFi.h>

int wifiSetup()
{
    WiFi.mode(WIFI_STA); // set as stationary -- connects to access point
    WiFi.begin(WIFI_SSID, WIFI_PW);
    Serial.println("[DEBUG] connecting to wifi...");
    while (WiFi.status() != WL_CONNECTED)
    {
        delay(1000);
    }
    Serial.print("[DEBUG] Connected: ");
    Serial.println(WiFi.localIP());

    return 1;
}