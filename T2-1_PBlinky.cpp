/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/Wian/Documents/EmbeddedSystems/T2-1_PBlinky/src/T2-1_PBlinky.ino"
/*
 * Project T2-1_PBlinky
 * Description: Blinks first name in morse code through LED D7 on Argon.
 * Author: Wian van Rooyen
 * Date: 03/04/2020
 */

void setup();
void loop();
#line 8 "c:/Users/Wian/Documents/EmbeddedSystems/T2-1_PBlinky/src/T2-1_PBlinky.ino"
int led1 = D7;

// setup() runs once, when the device is first turned on.
void setup()
{
  // Put initialization like pinMode and begin functions here.

  pinMode(led1, OUTPUT);
}

// loop() runs over and over again, as quickly as it can execute.
void loop()
{
    // The core of your code will likely live here.

    // W
    digitalWrite(led1, HIGH);
    delay(1000);
    digitalWrite(led1, LOW);
    delay(1000);
    digitalWrite(led1, HIGH);
    delay(3000);
    digitalWrite(led1, LOW);
    delay(1000);
    digitalWrite(led1, HIGH);
    delay(3000);
    digitalWrite(led1, LOW);

    delay(3000);

    // I
    digitalWrite(led1, HIGH);
    delay(1000);
    digitalWrite(led1, LOW);
    delay(1000);
    digitalWrite(led1, HIGH);
    delay(1000);
    digitalWrite(led1, LOW);

    delay(3000);

    // A
    digitalWrite(led1, HIGH);
    delay(1000);
    digitalWrite(led1, LOW);
    delay(1000);
    digitalWrite(led1, HIGH);
    delay(3000);
    digitalWrite(led1, LOW);

    delay(3000);

    // N
    digitalWrite(led1, HIGH);
    delay(3000);
    digitalWrite(led1, LOW);
    delay(1000);
    digitalWrite(led1, HIGH);
    delay(1000);
    digitalWrite(led1, LOW);

    delay(7000);

    //Restart
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    delay(500);
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    delay(500);
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);

    delay(7000);
}