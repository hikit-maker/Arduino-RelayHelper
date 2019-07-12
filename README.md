# Arduino-RelayHelper
Helper library for controlling a relay easily


## Example Code

````
#include "Relay.hpp"

#define RELAY_PIN 0

Relay relay(RELAY_PIN);

void setup()
{
    relay.setOff();
}

void loop()
{
    relay.setOn();
    Serial.print("Relay is on?");
    Serial.println(relay.isOn());
    
    delay(1000);
    
    relay.setOff();
    Serial.print("Relay is off?");
    Serial.println(relay.isOff());
    
    delay(1000);
}
