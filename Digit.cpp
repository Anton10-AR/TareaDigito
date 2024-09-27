#include "Digit.h"
#include <iostream>
using namespace std;

//Digit::Digit(short valor)
//{
//	value = valor;
//
//}
//
//Digit::Digit(string valor)
//{
//
//}

Digit::Digit()
{
	value = 0;
}

bool Digit::stringToDigit(string input) {
	bool output[7] = { false, false, false, false, false, false, false };
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

void Digit::next()
{
    value++;
    shortToDigit(value, digits);
}

void Digit::before()
{
    value--;
    shortToDigit(value, digits);
}

void Digit::toDigit(short v)
{
    shortToDigit(v, digits);
    cout << digits;
}

void Digit::shortToDigit(short input, bool output[7])
{
	bool output[7] = { false, false, false, false, false, false, false };
    switch (input) {
    case 0:
        output[0] = true; output[1] = true; output[2] = true;
        output[3] = true; output[4] = true; output[5] = true;
        output[6] = false;
        break;
    case 1:
        output[0] = false; output[1] = true; output[2] = true;
        output[3] = false; output[4] = false; output[5] = false;
        output[6] = false;
        break;
    case 2:
        output[0] = true; output[1] = true; output[2] = false;
        output[3] = true; output[4] = true; output[5] = false;
        output[6] = true;
        break;
    case 3:
        output[0] = true; output[1] = true; output[2] = true;
        output[3] = true; output[4] = false; output[5] = false;
        output[6] = true;
        break;
    case 4:
        output[0] = false; output[1] = true; output[2] = true;
        output[3] = false; output[4] = false; output[5] = true;
        output[6] = true;
        break;
    case 5:
        output[0] = true; output[1] = false; output[2] = true;
        output[3] = true; output[4] = false; output[5] = true;
        output[6] = true;
        break;
    case 6:
        output[0] = true; output[1] = false; output[2] = true;
        output[3] = true; output[4] = true; output[5] = true;
        output[6] = true;
        break;
    case 7:
        output[0] = true; output[1] = true; output[2] = true;
        output[3] = false; output[4] = false; output[5] = false;
        output[6] = false;
        break;
    case 8:
        output[0] = true; output[1] = true; output[2] = true;
        output[3] = true; output[4] = true; output[5] = true;
        output[6] = true;
        break;
    case 9:
        output[0] = true; output[1] = true; output[2] = true;
        output[3] = false; output[4] = false; output[5] = true;
        output[6] = true;
        break;
}

