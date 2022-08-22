#include "CytronMotorDriver.h"

CytronMD::CytronMD(MODE mode, uint8_t pin1, uint8_t pin2)
{
      _mode = mode;
      _pin1 = pin1;
      _pin2 = pin2;

      pinMode(_pin1, OUTPUT);
      pinMode(_pin2, OUTPUT);

      digitalWrite(_pin1, LOW);
      digitalWrite(_pin2, LOW);
}

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
                  ledcWrite(_pin1, speed);
#else
                  analogWrite(_pin1, speed);
#endif

                  digitalWrite(_pin2, LOW);
            }
            else
            {

#if defined(ARDUINO_ARCH_ESP32)
                  ledcWrite(_pin1, -speed);
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
                  ledcWrite(_pin1, speed);
                  ledcWrite(_pin2, 0);
#else
                  analogWrite(_pin1, speed);
                  analogWrite(_pin2, 0);
#endif
            }
            else
            {
#if defined(ARDUINO_ARCH_ESP32)
                  ledcWrite(_pin1, 0);
                  ledcWrite(_pin2, -speed);
#else
                  analogWrite(_pin1, 0);
                  analogWrite(_pin2, -speed);
#endif
            }
            break;
      }
}
