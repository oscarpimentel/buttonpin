/*
*/
#ifndef Buttonpin_h
#define Buttonpin_h

#include "Arduino.h"

//############################################################

class Buttonpin
{
	public:
		Buttonpin(int _pin);
		Buttonpin(void); // empty constructor
		void begin();
		bool get_state();
	private:
		int pin;
};

#endif