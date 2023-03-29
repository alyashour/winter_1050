#ifndef LED_h
#define LED_h

#include <Arduino.h>

class LED{
  private:
  int pin;

  public:
  int state;
  const static int ON = HIGH;
  const static int OFF = LOW;

  LED(int pin);
  void turnOn();
  void turnOff();
  void toggle();
  int set(bool input);
};

#endif