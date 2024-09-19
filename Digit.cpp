#include "Digit.h"
#include <iostream>
using namespace std;

//Digit(short valor) {
//
//}
//
Digit(string valor) {
	digits = valor.stringToDigit();
	value 
}

bool stringToDigit(string input) {
	bool output[7] = {false, false, false, false, false, false, false};
	for (int i = 0; i < input.length(); i++) {
		switch (input[i]) {
		case 'a':
			output[0] = true;
			break;
		case 'b':
			output[1] = true;
			break;
		case 'c':
			output[2] = true;
			break;
		case 'd':
			output[3] = true;
			break;
		case 'e':
			output[4] = true;
			break;
		case 'f':
			output[5] = true;
			break;
		case 'g':
			output[6] = true;
			break;
		}
	}
	return output;
}