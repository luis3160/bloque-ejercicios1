#include<iostream>
#include<cstring>


using namespace std;
int main() {


	char letra[30] = {};
	int longitud = 0;

	cout << "ingresa una cadena de texto menor a 10 caracteres : ";cin.getline(letra, 30, '\n');
	longitud = strlen(letra);


	if (longitud > 10) {

		cout << letra;
	}

	else { cout << "not puedo darte esa informacion"; };



	cin.get();
	return 0;
}