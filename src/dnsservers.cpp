#include "dnsservers.h"

DNSServer dnsServer;

void setupDNSServer(int dnsPort, IPAddress *apIP)
{
    /* set up DNS server to redirect to AP IP for all requests */
    dnsServer.setErrorReplyCode(DNSReplyCode::NoError);
    dnsServer.start(dnsPort, "*", *apIP);
}

void processNextDNSRequest()
{
    dnsServer.processNextRequest();
}

void registerMDNS(const char *hostName, int port)
{
    Serial.println("ATTEMPTING TO REGISTER MDNS");
    if (!MDNS.begin(hostName))
    {
        Serial.println("Error setting up MDNS responder!");
    }
    else
    {
        Serial.println("mDNS responder started");
        // Add service to MDNS-SD
        MDNS.addService("http", "tcp", port);
    }
}