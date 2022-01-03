/*
*/
#ifndef Buttonpin_h
#define Buttonpin_h

#include "Arduino.h"

//############################################################

class Buttonpin
{
	public:
		Buttonpin(int _pin, bool _invert=false);
		Buttonpin(void); // empty constructor
		void begin();
		bool get_state();
		bool is_on();
	private:
		int pin;
		bool invert;
};

#endif