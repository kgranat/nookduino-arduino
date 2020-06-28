// Animalese library
// 
// Based of the Talkie Library. 
// Changes:
// 	-All data has been moved back into a .h file to better facilitate voice change
//	-The only vocabulary available are letters A-Z and numbers 0-9 since these are all that is needed for Animalese
//
// Origirnal Talkie header as follows:
//	  Talkie Library
//    Copyright 2011 Peter Knight
// 	  This code is released under GPLv2 license.
//
//    Armin Joachimsmeyer 11/2018 converted to .c and .h files
//
// 	  The following phrases are derived from those built into the
// 	  Acorn Computers Speech Synthesizer add-on from 1983.
//
// 	  A male voice with an RP English accent, voiced by Kenneth Kendall.




#include <stdint.h>
#include <avr/pgmspace.h>

#include <Arduino.h>


#include "Vocab_Acorn.h"

#if defined(__arm__)
#include <avr/dtostrf.h>
#endif


/* say any number between -999,999 and 999,999 */

void stringToVoice(Animalese * aVoice, String message , boolean printSerial=false)

{
	for(int i = 0; i<message.length(); i++)
	{
		charToVoice(aVoice, message.charAt(i), printSerial);
	}


}



void charToVoice(Animalese * aVoice, char aLetter, boolean printSerial=false) {

    switch (aLetter) {
        case '0':
            aVoice->say(sp_ZERO);
        	
            break;

        case '1':
            aVoice->say(sp_ONE);
            break;

        case '2':
            aVoice->say(sp_TWO);
            break;

        case '3':
            aVoice->say(sp_THREE);
            break;

        case '4':
            aVoice->say(sp_FOUR);
            break;

        case '5':
            aVoice->say(sp_FIVE);
            break;

        case '6':
            aVoice->say(sp_SIX);
            break;

        case '7':
            aVoice->say(sp_SEVEN);
            break;

        case '8':
            aVoice->say(sp_EIGHT);
            break;

        case '9':
            aVoice->say(sp_NINE);
            break;

        case 'A':
            aVoice->say(sp_A);
            break;

        case 'a':
            aVoice->say(sp_A);
            break;


        case 'B':
            aVoice->say(sp_B);
            break;

        case 'b':
            aVoice->say(sp_B);
            break;

        case 'C':
            aVoice->say(sp_C);
            break;

        case 'c':
            aVoice->say(sp_C);
            break;

        case 'D':
            aVoice->say(sp_D);
            break;

        case 'd':
            aVoice->say(sp_D);
            break;

        case 'E':
            aVoice->say(sp_E);
            break;

        case 'e':
            aVoice->say(sp_E);
            break;

        case 'F':
            aVoice->say(sp_F);
            break;

        case 'f':
            aVoice->say(sp_F);
            break;

        case 'G':
            aVoice->say(sp_G);
            break;

        case 'g':
            aVoice->say(sp_G);
            break;

        case 'H':
            aVoice->say(sp_H);
            break;

        case 'h':
            aVoice->say(sp_H);
            break;

        case 'I':
            aVoice->say(sp_I);
            break;

        case 'i':
            aVoice->say(sp_I);
            break;

        case 'J':
            aVoice->say(sp_J);
            break;

        case 'j':
            aVoice->say(sp_J);
            break;

        case 'K':
            aVoice->say(sp_K);
            break;

        case 'k':
            aVoice->say(sp_K);
            break;

        case 'L':
            aVoice->say(sp_L);
            break;

        case 'l':
            aVoice->say(sp_L);
            break;

        case 'M':
            aVoice->say(sp_M);
            break;

        case 'm':
            aVoice->say(sp_M);
            break;

        case 'N':
            aVoice->say(sp_N);
            break;

        case 'n':
            aVoice->say(sp_N);
            break;

        case 'O':
            aVoice->say(sp_O);
            break;

        case 'o':
            aVoice->say(sp_O);
            break;

        case 'P':
            aVoice->say(sp_P);
            break;

        case 'p':
            aVoice->say(sp_P);
            break;

        case 'Q':
            aVoice->say(sp_Q);
            break;

        case 'q':
            aVoice->say(sp_Q);
            break;

        case 'R':
            aVoice->say(sp_R);
            break;

        case 'r':
            aVoice->say(sp_R);
            break;

        case 'S':
            aVoice->say(sp_S);
            break;

        case 's':
            aVoice->say(sp_S);
            break;

        case 'T':
            aVoice->say(sp_T);
            break;

        case 't':
            aVoice->say(sp_T);
            break;

        case 'U':
            aVoice->say(sp_U);
            break;

        case 'u':
            aVoice->say(sp_U);
            break;

        case 'V':
            aVoice->say(sp_V);
            break;

        case 'v':
            aVoice->say(sp_V);
            break;

        case 'W':
            aVoice->say(sp_W);
            break;

        case 'w':
            aVoice->say(sp_W);
            break;

        case 'X':
            aVoice->say(sp_X);
            break;

        case 'x':
            aVoice->say(sp_X);
            break;

        case 'Y':
            aVoice->say(sp_Y);
            break;

        case 'y':
            aVoice->say(sp_Y);
            break;

        case 'Z':
            aVoice->say(sp_Z);
            break;

        case 'z':
            aVoice->say(sp_Z);
            break;


        case ' ':
            aVoice->say(sp_PAUSE1);
            break;


        case ',':
            aVoice->say(sp_PAUSE1);
            aVoice->say(sp_PAUSE1);
            aVoice->say(sp_PAUSE1);
            break;


        default:
            aVoice->say(sp_PAUSE1);
            break;




       }
       if(printSerial == true)

       {
       	Serial.print(aLetter);
       }

}

