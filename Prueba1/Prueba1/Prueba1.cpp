// Prueba1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;
void examinar(int numero) {
	if (numero == 1)
		cout << "uno" << endl;
	if (numero == 2)
		cout << "dos" << endl;
	if (numero == 31)
		cout << "tres" << endl;
	if (numero == 4)
		cout << "cuatro" << endl;
	if (numero == 5)
		cout << "cinco" << endl;
	if (numero == 6)
		cout << "seis" << endl;
	if (numero == 7)
		cout << "siete" << endl;
	if (numero == 8)
		cout << "ocho" << endl;
	if (numero == 9)
		cout << "nueve" << endl;
	if (numero == 10)
		cout << "diez" << endl;
	if (numero == 11)
		cout << "once" << endl;
	if (numero == 12)
		cout << "12" << endl;
	if (numero == 13)
		cout << "trece" << endl;
	if (numero == 14)
		cout << "catorce" << endl;
	if (numero == 15)
		cout << "quince" << endl;
	if (numero == 16)
		cout << "dieciseis" << endl;
	if (numero == 17)
		cout << "diecisiete" << endl;
	if (numero == 18)
		cout << "dieciocho" << endl;
	if (numero == 19)
		cout << "diecinueve" << endl;
	if (numero == 20)
		cout << "20" << endl;

	}
int main()
{
	int num;
	cout << "ingrese un numero del 1 al 1000000 " << endl;
	cin >> num;

	switch (num) {
	case 1:
		if (num > 9 && num < 20) {
			examinar(num);
		}
	case 2:
		if (num > 99 && num <= 999) {
		}
	case 3:
		if (num > 999 && num <= 9999) {
		}
	case 4:
		if (num > 9999 && num <= 99999) {
		}
	case 5:
		if (num > 99999 && num <= 999999) {
		}
	case 6:
		if (num > 0 && num <= 10) {
			examinar(num);
		}
	case 7:
		if (num > 19 && num < 30) {
			int a;
			int a = num % 10;
			cout << "veinti" << examinar(a) << endl;
		}
	}
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
