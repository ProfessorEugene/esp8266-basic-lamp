#include "light.h"

int lightPin = 15;
int lightStatus = 0;
int pwmMin = 0;
int pwmMax = 1023;

void setupLight()
{
    pinMode(lightPin, OUTPUT);
}

int getLightStatus()
{
    return lightStatus;
}

void setLightStatus(int status)
{
    Serial.print("Setting light status to ");
    Serial.print(status);
    Serial.println();
    if(status < pwmMin){
        status = pwmMin;
    }
    if(status > pwmMax){
        status = pwmMax;
    }
    lightStatus = status;
}