// programa que reciba los atributos de un vehiculo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include<stdlib.h>
using namespace std;

int main() {
    // Declaraci�n de variables para almacenar los atributos del veh�culo
    string marca, modelo, color;
    int a�o, velocidadMax,menu=0;



    cout << "Ingrese la marca del vehiculo: ";cin >> marca;
    cout << "Ingrese el modelo del vehiculo: ";cin >> modelo;
    cout << "Ingrese el a�o del vehiculo: ";cin >> a�o;
    cout << "Ingrese el color del vehiculo: ";cin >> color;
    cout << "Ingrese la velocidad m�xima del vehiculo (en km/h): ";cin >> velocidadMax;

    cout << "/nelija una de las opciones"<<endl;
    cout << "/n(#1) marca"<<endl;
    cout << "/n(#1) moodelo"<<endl;
    cout << "/n(#3)ano"<<endl;
    cout << "/n(#4) color"<<endl;
    cout << "/n(#5) maxima velocidad"<<endl;
    cout << "ingrese la ocion que decea    :   ";cin >> menu;

    switch (menu){

    case 1:cout<<"esta es la marca  : " <<marca;break;
    case 2:cout << "esta es el modelo  :  "<<modelo;break;
    case 3:cout << "esta es ano  :  "<<a�o;break;
    case 4:cout << "esta es el color   :  "<<color;break;
    case 5:cout << "esta es la maxima velocidad   :  "<<velocidadMax;break;
        

    }
    system("pause");

    return 0;
}