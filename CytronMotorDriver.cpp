#include "CytronMotorDriver.h"

// setting PWM properties
const int freq = 5000;
const int ledChannel = 0;
const int ledChanne2 = 1;
const int resolution = 8;

CytronMD::CytronMD(MODE mode, uint8_t pin1, uint8_t pin2)
{
      _mode = mode;
      _pin1 = pin1;
      _pin2 = pin2;

#if defined(ARDUINO_ARCH_ESP32)

      // configure PWM functionalitites
      ledcSetup(ledChannel, freq, resolution);

      // attach the channel to the GPIO to be controlled
      ledcAttachPin(_pin1, ledChannel);

      ledcWrite(ledChannel, 0);

      switch (_mode)
      {
      case PWM_DIR:
            pinMode(_pin2, OUTPUT);
            digitalWrite(_pin2, LOW);
            break;
      case PWM_PWM:
            ledcSetup(ledChanne2, freq, resolution);
            ledcAttachPin(_pin2, ledChanne2);
            ledcWrite(ledChanne2, 0);
            break;
      }

#else
      pinMode(_pin1, OUTPUT);
      pinMode(_pin2, OUTPUT);

      digitalWrite(_pin1, LOW);
      digitalWrite(_pin2, LOW);
#endif

      void CytronMD::setSpeed(int16_t speed)
      {
            // Make sure the speed is within the limit.
            if (speed > 255)
            {
                  speed = 255;
            }
            else if (speed < -255)
            {
                  speed = -255;
            }

            // Set the speed and direction.
            switch (_mode)
            {
            case PWM_DIR:
                  if (speed >= 0)
                  {
#if defined(ARDUINO_ARCH_ESP32)

                        ledcWrite(ledChannel, speed);
#else
                        analogWrite(_pin1, speed);
#endif

                        digitalWrite(_pin2, LOW);
                  }
                  else
                  {

#if defined(ARDUINO_ARCH_ESP32)
                        ledcWrite(ledChannel, -speed);
#else
                        analogWrite(_pin1, -speed);
#endif

                        digitalWrite(_pin2, HIGH);
                  }
                  break;

            case PWM_PWM:
                  if (speed >= 0)
                  {
#if defined(ARDUINO_ARCH_ESP32)
                        ledcWrite(ledChannel, speed);
                        ledcWrite(ledChanne2, 0);
#else
                        analogWrite(_pin1, speed);
                        analogWrite(_pin2, 0);
#endif
                  }
                  else
                  {
#if defined(ARDUINO_ARCH_ESP32)
                        ledcWrite(ledChannel, -speed);
                        ledcWrite(ledChanne2, 255);
#else
                        analogWrite(_pin1, -speed);
                        analogWrite(_pin2, 255);
#endif
                  }
                  break;
            }
      }
