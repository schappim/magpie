MAGPIE (100% ARDUINO UNO COMPATIBLE)
======

The Magpie board is the answer to not only the requirement for an Arduino Uno-compatible board – but also the need to watch what the outputs pins are doing. How? With an LED connected to each digital and analogue pin, you can debug projects that use them visually without having to use the Serial Monitor in the Arduino IDE. We’ve used tiny MOSFETs that sink current through each LED when a voltage is present on the matching I/O pin. It’s the quickest way to check on pin status without using any extra hardware, saving you time, money and effort.

All the pins are labelled clearly, and the corners of the board are nicely rounded for a smooth finish. Furthermore the Magpie is fully compatible with the Arduino R2 standard – it is Uno shield compatible, uses the ATmega16U2 for the USB interface and has ICSP pins fitted for the main and USB microcontroller. When installing simply use the Arduino Uno USB driver found in the IDE “drivers” folder.

Arduino is an open-source physical computing platform based on a simple I/O board and a development environment that implements the Processing/Wiring language. Arduino can be used to develop stand-alone interactive objects or can be connected to software on your computer (e.g. Flash, Processing, and MaxMSP). The open-source IDE can be downloaded for free (currently for Mac OS X, Windows, and Linux).

We used 2N7002 on every I/O pin exposed to the shield connectors, including A0-A5  where the MOSFET are at the bottom of the PCB
Requires optional USB A to mini-B cable.

Features:

* LEDs on each digital and analogue I/O pin activated by MOSFET on each pin
* Input voltage between 6 to 12 V DC
* ATmega328P-PU microcontroller with Arduino bootloader
* 32 k flash memory
* 14 digital I/O pins (6 with PWM)
* 6 analogue inputs
* Fully Arduino Uno R2-compatible
