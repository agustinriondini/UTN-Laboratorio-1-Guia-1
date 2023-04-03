#include <iostream>
#include <cstring>
using namespace std;

//Hacer un programa para ingresar por teclado la cantidad de
// horas trabajadas por un operario y el valor que se le paga por hora
//trabajada y listar por pantalla el sueldo que le corresponda.

int main (){

	float horasTrabajadas, valorHora, sueldo;
	string empleado;
	string dev ="Resolucion de ejercicios Juan Agustin Riondini -- UTN-FRGP--LABORATORIO--1--";
	cout << dev << endl;
	cout << "===================== EJERCICIO 1 =====================" << endl << "Ingrese el nombre del empleado: " << endl;
	cin >> empleado;
	cout << "Ingrese la cantidad de horas trabajadas por " << empleado << endl;
	cin >> horasTrabajadas;
	cout << "Ingrese el valor a abonarle por hora trabajada " << endl;
	cin >> valorHora;

	sueldo = valorHora*horasTrabajadas;

	cout << "====================== LIQUIDACION FINAL ======================" << endl << endl << "El sueldo a abonarle a " << empleado << " es de $ " << sueldo << endl;


	return 0;
}
