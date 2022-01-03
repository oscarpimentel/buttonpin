/*
*/
#include "Arduino.h"
#include "Buttonpin.h"

//############################################################

Buttonpin::Buttonpin(int _pin, bool _invert=false){
	pin = _pin;
	invert = _invert;
}

Buttonpin::Buttonpin(void){}

//############################################################

void Buttonpin::begin(){
	pinMode(pin, INPUT);
}

//############################################################

bool Buttonpin::get_state(){
	bool state = digitalRead(pin);
	if (invert){
		state = !state;
	}
	return state;
}

bool Buttonpin::is_on(){
	return get_state()==HIGH;
}