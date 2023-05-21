/*******************************************************************************
 * THIS SOFTWARE IS PROVIDED IN AN "AS IS" CONDITION. NO WARRANTY AND SUPPORT
 * IS APPLICABLE TO THIS SOFTWARE IN ANY FORM. CYTRON TECHNOLOGIES SHALL NOT,
 * IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL OR CONSEQUENTIAL
 * DAMAGES, FOR ANY REASON WHATSOEVER.
 ********************************************************************************
 * DESCRIPTION:
 *
 * This example shows how to drive a motor using the PWM and DIR pins.
 * This example only shows how to drive a single motor for simplicity.
 * For dual channel motor driver, both channel work the same way.
 * 
 * 
 * CONNECTIONS: Arduino Uno
 * 
 * Arduino D3  - Motor Driver PWM Input
 * Arduino D4  - Motor Driver DIR Input
 * Arduino GND - Motor Driver GND
 * 
 * CONNECTIONS: ESP32
 * 
 * ESP32 D2  - Motor Driver PWM Input
 * ESP32 D4  - Motor Driver DIR Input
 * ESP32 GND - Motor Driver GND
 *
 * NOTE: 
 * 1. Default value for channel is 0.
 * 2. Different channels (0 - 15) should be assigned for every CytronMD instance.
 *
 * AUTHOR   : Kong Wai Weng
 * COMPANY  : Cytron Technologies Sdn Bhd
 * WEBSITE  : www.cytron.io
 * EMAIL    : support@cytron.io
 *
 *******************************************************************************/

 #include "CytronMotorDriver.h"


// Configure the motor driver.
CytronMD motor(PWM_DIR, 2, 4, 0);  // PWM = Pin 2, DIR = Pin 4, CHANNEL = 0.


// The setup routine runs once when you press reset.
void setup() {
  
}


// The loop routine runs over and over again forever.
void loop() {
  motor.setSpeed(128);  // Run forward at 50% speed.
  delay(1000);
  
  motor.setSpeed(255);  // Run forward at full speed.
  delay(1000);

  motor.setSpeed(0);    // Stop.
  delay(1000);

  motor.setSpeed(-128);  // Run backward at 50% speed.
  delay(1000);
  
  motor.setSpeed(-255);  // Run backward at full speed.
  delay(1000);

  motor.setSpeed(0);    // Stop.
  delay(1000);
}
