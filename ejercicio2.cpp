#include <iostream>
#include <cstring>
using namespace std;

// Hacer un programa que solicite por teclado que se ingresen dos números
//y luego guardarlos en dos variables distintas. A continuación se deben
//intercambiar mutuamente los valores en ambas variables y mostrarlos
//por pantalla.


int main (){

	int A, B, C;
	string dev ="Resolucion de ejercicios Juan Agustin Riondini -- UTN-FRGP--LABORATORIO--1--";

	cout << dev << endl;
	cout << "===================== EJERCICIO 2 =====================" << endl << "Le solicitamos ingrese 2 numeros enteros, ingrese el primero: " << endl;
	cin >> A;
	cout << "Ingrese ahora el segundo: " << endl;
	cin >> B;
	cout << "El orden de los numeros ingresados actualmente es "<< "A " << A << " y B " << B << endl << endl;
	cout << "Ahora los vamos a invertir..." << endl;

	C = A;
	A = B;
	B = C;

	cout << "====================== INVIRTIENDO VARIABLE ======================" << endl << endl << "El nuevo valor de A es " << A << " y de B " << B << endl;


	return 0;
}
