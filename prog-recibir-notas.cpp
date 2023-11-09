// programa que reciba las notas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {

	int notas =0, lengua, mat, soc, nat,numero;

	
	do {
		

		cout << "ingresa la nota de lengua espanola : ";cin >> lengua;
		cout << "ingresa la nota de matematicas : ";cin >> mat;
		cout << "ingresa la nota de sociales : ";cin >> soc;
		cout << "ingresa la nota de naturales : ";cin >> nat;
		notas = (lengua + mat + soc + nat) / 4;

		cout << "\nesta es tu nota promedio  : " << notas<<endl;

		cout << "que accion va a eralizar '0' para terminar o cualquier numero para empezar: ";cin >> numero;
	}

	while (numero != 0);

	return 0;



}
