#ifndef CYTRON_MOTOR_DRIVER_H
#define CYTRON_MOTOR_DRIVER_H

#include <Arduino.h>
#include <stdint.h>



enum MODE {
  PWM_DIR,
  PWM_PWM,
};



class CytronMD
{
  public:
    CytronMD(MODE mode, uint8_t pin1, uint8_t pin2);
    void setSpeed(int16_t speed);
    
  protected:
    MODE _mode;
  	uint8_t _pin1;
    uint8_t _pin2;
};



/* class CytronMD10C : public CytronMD
{
  public:
    CytronMD10C(uint8_t pwmPin, uint8_t dirPin) : CytronMD(PWM_DIR, pwmPin, dirPin) {};
};



class CytronMD13S : public CytronMD
{
  public:
    CytronMD13S(uint8_t pwmPin, uint8_t dirPin) : CytronMD(PWM_DIR, pwmPin, dirPin) {};
}; */

#endif
