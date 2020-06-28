/*
 * AnimaleseUtils.cpp
 * Based on the Animalese library. https://github.com/going-digital/Animalese.
 * Copyright 2011 Peter Knight
 *
 *  SUMMARY
 *  Animalese is a speech library for Arduino.
 *  GaryA 10/2018 added the original sayNumber() function
 *
 *  Copyright (C) 2018  Armin Joachimsmeyer
 *  armin.joachimsmeyer@gmail.com
 *
 *  This file is part of Talkie_new https://github.com/ArminJo/Talkie_new.
 *
 *  Talkie_new is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/gpl.html>.
 *
 */

#include <Arduino.h>

//#include "Vocab_US_Large.h"
//#include "Vocab_Special.h"

#include "AnimaleseUtils.h"

#if defined(__arm__)
#include <avr/dtostrf.h>
#endif

int8_t sayQDigit(Animalese * aVoice, char aDigit) {

}

int8_t sayQVoltageMilliVolts(Animalese * aVoice, long aMilliVolt) {
    

}

int8_t sayQVoltageVolts(Animalese * aVoice, float aVolt) {
    

}

int8_t sayQPause(Animalese * aVoice) {
   

}

int8_t sayQTimeout(Animalese * aVoice) {


}

/* sayQ any number between -999,999 and 999,999 */
int8_t sayQNumber(Animalese * aVoice, long aNumber) {
  

}

#define LENGT_OF_FLOAT_STRING 14
int8_t sayQFloat(Animalese * aVoice, float aFloat, int aDecimalPlaces, bool aSuppressLeadingZero, bool aSuppressTrailingZero) {



}











