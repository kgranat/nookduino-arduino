//Animalese Demo 
// Based off of the Talkie library Copyright 2011 Peter Knight
//
// This code is released under GPLv2 license.


//base Animalese Library
#include "Animalese.h"

//pick one of the vocab files for different voices
#include "Vocab_Acorn.h"
//#include "Vocab_US_Large.h"
//#include "Vocab_US_TI99.h"


Animalese voice(long(40000),long(12000)); //start the Animalese Libary with a frequency of 40000hz and a period of 8ms (8000 microseconds)
// changing the frequency will change the pitch of the voice, a smaller frequency will give you a lower pitch and a higher drequency will give you a higher pitch. 
// chaging the period will change how long each letter is spoken for. Increaset this value to slow down speech, or decrease it to make it go faster
// Both values have their limits, but you can get some fun / interesting sounds beyond those limits.
// The defualt Talkie Library uses 10000 hz frequency and a 25ms (25000 microseconds) if you want to here what the voice sounds like normally



void setup() {
 //turn led on
 pinMode(13, OUTPUT);
 digitalWrite(13, HIGH);
 
 stringToVoice(&voice, "Hello World! This is being spoken on the Nookduino and sent over the serial port, yes yes");
  
}
  
void loop() {
}