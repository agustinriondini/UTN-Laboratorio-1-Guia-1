#include <iostream>
#include <cstring>
using namespace std;

//Una concesionaria de autos paga a los vendedores un sueldo fijo de
//$ 15.000 más $ 2.000 de premio por cada auto vendido.
//Hacer un programa que permita ingresar por teclado la cantidad de
//autos vendidos por un vendedor y luego informar por pantalla el sueldo
//total a pagar.

int main (){

	string vendedor;
	int sueldoFijo = 15000, autoVendido = 2000, cantidadVentas;
	float sueldoFinal;

	string dev ="Resolucion de ejercicios Juan Agustin Riondini -- UTN-FRGP--LABORATORIO--1--";

	cout << dev << endl;
	cout << "===================== EJERCICIO 3 =====================" << endl << "Ingrese el nombre del empleado/vendedor: " << endl;
	cin >> vendedor;
	cout << "Cantidad de autos vendidos por: " << vendedor << endl;
	cin >> cantidadVentas;

	//operacion

	sueldoFinal = autoVendido*cantidadVentas+sueldoFijo;

	cout << "====================== SUELDO DE ==== " << vendedor << " =================" << endl;
	cout << endl;
	cout << "$" << sueldoFinal;


	return 0;
}
