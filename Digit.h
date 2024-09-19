#pragma once
#include <iostream>
using namespace std;

class Digit
{
private:
	short value;
	bool digits[7];

public:
	Digit(short valor);
		// habilitar los digitos
		// 7 -> [1|1|1|0|0|0|0] -> debe llamar a la funcion toDigit()

	Digit(string valor); // se asume que los caracteres estan ordenados
		// valor = "abc" -> [1|1|1|0|0|0|0]
		// valor = "abdeg" -> 2

	Digit();		// constructor por defecto que genera todo con el '0'

	void next();	// obtiene el siguiente digito por ejemplo si value = 2, al llamar a next() value = 3
					// se debe validar

	void before();	// obtiene el anterior en ciclo, si value = 2, despues de ejecutar before() value = 1
					// si value = 0, el anterior en ciclo es 9

	void toDigit(short v);	// convierte un digito entero en su equivalente en leds

	void reset();	// -1	[0|0|0|0|0|0|0]

	bool isValid();	// valida si la representacion del vector leds es valida

	Digit add(short val);	//devuelve un nuevo digito sobre la base del actual, incrementandole el val

	void print();	// imprime en la consola el valor y el tablero que representa el o los LEDs
};

