#include "Relay.hpp"

Relay::Relay(int pin)
{
    pinMode(pin, OUTPUT);
    
    this->pin = pin;
    this->on = HIGH;
    this->off = LOW;
    this->state = off;
    
    this->update();
}

Relay::Relay(int pin, int on, int off)
{
    pinMode(pin, OUTPUT);
    
    this->pin = pin;
    this->on = on;
    this->off = off;
    this->state = off;
    
    this->update();
}

void Relay::setOn()
{
    if (this->isOn())
    {
        return;
    }

    this->state = this->on;
    this->update();
}

void Relay::setOff()
{
    if (this->isOff())
    {
        return;
    }
    
    this->state = this->off;
    this->update();
}

void Relay::update()
{
    digitalWrite(this->pin, this->state);
}

bool Relay::isOn()
{
  return this->state == Relay::on;
}

bool Relay::isOff()
{
  return this->state == this->off;
}
