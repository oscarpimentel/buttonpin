/*
*/
#include "Arduino.h"
#include "Buttonpin.h"

//############################################################

Buttonpin::Buttonpin(int _pin){
	pin = _pin;
}

Buttonpin::Buttonpin(void){}

//############################################################

void Buttonpin::begin(){
	pinMode(pin, INPUT);
}

//############################################################

bool Buttonpin::get_state(){
	bool state = digitalRead(pin);
	return state;
}