#include "util.h"
#include "storage.h"
#include "httpserver.h"
#include "wifi.h"
#include "dnsservers.h"

/* DNS server port */
const int DNS_PORT = 53;
/* http server port */
const int HTTP_PORT = 80;
/* http server host name */
const char *HOST_NAME = "suzielamp";
/* AP ip address */
IPAddress apIP(192, 168, 4, 1);
/* API netmask */
IPAddress apNetMask(255, 255, 255, 0);
/* AP credentials */
struct Credentials apCredentials;
const char *AP_PASSWORD = "12345678";
/* Station credentials */
Credentials stationCredentials;

void setup()
{
    strcpy(apCredentials.ssid, HOST_NAME);
    strcpy(apCredentials.password, AP_PASSWORD);
    Serial.begin(115200);
    setupLight();
    setupDNSServer(DNS_PORT, &apIP);
    setupHttpServer(HTTP_PORT, HOST_NAME, &apIP, &apCredentials, &stationCredentials);
    setupWifi(&apIP, &apNetMask, &apCredentials, &stationCredentials, HOST_NAME, HTTP_PORT);
}

void loop()
{
    processNextWifiRequest();
    processNextDNSRequest();
    processNextHttpRequest();
}
