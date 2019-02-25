# Arduino Library for Cytron Motor Drivers
This library provides functions for Cytron Motor Drivers.<br>
Please refer to the examples on how to use the library.<br>
Connection to the motor driver is described in the comment section of the examples.

## Installation
1. Open the Arduino IDE, select `Sketch` -> `Include Library` -> `Manage Libraries...`.
2. Search for `Cytron Motor Drivers Library`.
3. Click `Install` to install the library.
4. Restart the Arduino IDE.
5. Examples can be opened in Arduino IDE from `File` -> `Examples` -> `Cytron DC Motors Library`.<br>
Please refer to the example list below for all the compatible motor drivers.


## Examples
### 1. PWM_DIR
This example shows how to drive a motor using PWM and DIR pins.<br>
PWM pin is used to control the speed of the motor while DIR pin is used to control the direction.<br>
<br>
This example only show how to drive a single motor for simplicity.<br>
For multi channels motor driver, all channels work the same way.<br>

**Compatible Motor Drivers:**
* [MD10C](https://www.cytron.io/p-md10c)
* [MD10-POT](https://www.cytron.io/p-md10-pot)
* [MD13S](https://www.cytron.io/p-md13s)
* [MD20A](https://www.cytron.io/p-20amp-6v-30v-dc-motor-driver)
* [MD30C](https://www.cytron.io/p-md30c)
* [SHIELD-MD10](https://www.cytron.io/p-shield-md10)
* [MDS160A*](https://www.cytron.io/p-mds160a)
* [MDS40B*](https://www.cytron.io/p-mds40b)

**Smart series motor driver needs to be configured as **Sign-Magnitude PWM Input** mode. Refer to user manual for more details.*



### 2. PWM_DIR_DUAL
This example shows how to drive 2 motors using PWM and DIR pins .<br>
PWM pin is used to control the speed of the motor while DIR pin is used to control the direction.<br>

**Compatible Motor Drivers:**
* [SHIELD-2AMOTOR](https://www.cytron.io/p-shield-2amotor)
* [SHIELD-3AMOTOR](https://www.cytron.io/p-shield-3amotor)
* [MDD10A](https://www.cytron.io/p-mdd10a)
* [FD04A](https://www.cytron.io/p-fd04a)
* [MDDS10*](https://www.cytron.io/p-mdds10)
* [MDDS30*](https://www.cytron.io/p-mdds30)
* [MDDS60*](https://www.cytron.io/p-mdds60)

**Smart series motor driver needs to be configured as **Sign-Magnitude PWM Input** mode. Refer to user manual for more details.*



### 2. PWM_PWM_DUAL
This example shows how to drive 2 motors using 4 PWM input pins (2 for each motor).<br>
Input A controls the motor speed in forward direction and Input B controls the motor speed in backward direction.<br>

**Compatible Motor Drivers:**
* [MAKER-DRIVE](https://www.cytron.io/p-maker-drive)
* [MDD03A](https://www.cytron.io/p-mdd03a)
