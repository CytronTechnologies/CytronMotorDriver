# Arduino Library for Cytron Motor Drivers
This library provides functions to control Cytron Motor Drivers.
Please refer to the example list below for all the compatible motor drivers.

### 1. PWM_DIR
This example shows how to drive a motor using PWM and DIR pins.<br>
PWM pin is used to control the speed of the motor while DIR pin is used to control the direction.

**Compatible Motor Drivers:**
* [MD10C](https://www.cytron.io/p-md10c)
* [MD10-POT](https://www.cytron.io/p-md10-pot)
* [MD13S](https://www.cytron.io/p-md13s)
* [MD30C](https://www.cytron.io/p-md30c)
* [SHIELD-MD10](https://www.cytron.io/p-shield-md10)
* [SHIELD-2AMOTOR](https://www.cytron.io/p-shield-2amotor)
* [SHIELD-3AMOTOR](https://www.cytron.io/p-shield-3amotor)
* [MDD10A](https://www.cytron.io/p-mdd10a)
* [FD04A](https://www.cytron.io/p-fd04a)
* [MDDS10*](https://www.cytron.io/p-mdds10)
* [MDDS30*](https://www.cytron.io/p-mdds30)
* [MDS160A*](https://www.cytron.io/p-mds160a)
* [MDS40B*](https://www.cytron.io/p-mds40b)
* [MDDS60*](https://www.cytron.io/p-mdds60)

**Smart series motor driver needs to be configured as **Sign-Magnitude PWM Input** mode. Refer to user manual for more details.*


### 2. PWM_PWM
This example shows how to drive a motor using 2 PWM input pins.<br>
Input 1 controls the motor speed in forward direction and Input 2 controls the motor speed backward direction.

**Compatible Motor Drivers:**
* [MAKER-DRIVE](https://www.cytron.io/p-maker-drive)
* [MDD03A](https://www.cytron.io/p-mdd03a)
