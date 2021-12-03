
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;


#define INICIO 0
#define S1 1
#define S2 2
#define S3 3
#define ERROR 4


int main() {
	int estado = INICIO;
	string cadena;
	cout << "Ingrese la cadena" << endl;
	cin >> cadena;
	/*char* cadenaconver = strdup(cadena.c_str());*/


	for (int i = 0; i < cadena.length(); i++) {


		//---------------------------------
		switch (estado) {

		case INICIO:
			if (cadena[i] == '0') {
				estado = S1;
			}
			else {
				estado = ERROR;
			}
			break;

		case S1:
			if (cadena[i] == '0') {
				estado = S2;
			}
			else {
				estado = ERROR;
			}


			break;

		case S2:
			if (cadena[i] == '1') {
				cout << "cadena permitida" << endl;
			}
			else {
				estado = ERROR;
			}
			break;

		case ERROR:
			cout << "cadena no permitida" << endl;
			i = cadena.length() + 100;


			break;

		}



		//----------------------------------


	}





	system("pause");
	return 0;
}