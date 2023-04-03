#include <iostream>
#include <cstring>
using namespace std;

//Hacer un programa para ingresar por teclado la cantidad de asientos
//disponibles en un avión y la cantidad de pasajes ocupados y luego
//calcular e informar el porcentaje de ocupación y el porcentaje
//de no ocupación del mismo

int main (){

	int capacidadAvion, pasajesVendidos, disponibles;
	float  ocupacion, noOcupacion;

	string dev ="Resolucion de ejercicios Juan Agustin Riondini -- UTN-FRGP--LABORATORIO--1--";
	cout << dev << endl;
	cout << "===================== EJERCICIO 4 =====================" << endl << "======= Aerolinea Scaloneta =======" << endl;
	cout << "Ingrese la capacidad de asientos que tiene este avion: " << endl;
	cin >> capacidadAvion;
	cout << "Ingrese la cantidad de pasajes vendidos en total: " << endl;
	cin >> pasajesVendidos;
	cout << "Calculando ocupacion..." << endl;

	//operacion
	disponibles = capacidadAvion-pasajesVendidos;

	ocupacion = (pasajesVendidos*100)/capacidadAvion;
	noOcupacion = (disponibles*100)/capacidadAvion;


	cout << "========== Aerolineas Scaloneta =========== vuelo LAB1EJ4" << endl;
	cout << endl;
	cout << "La ocupacion total del vuelo es: " << ocupacion << "%" << " con un total de " << pasajesVendidos << " plazas vendidas" << endl;
	cout << endl;
	cout << "La disponibilidad actual de plazas en el vuelo es de " << disponibles << " asientos o un " << noOcupacion << "%" << endl;


	return 0;
}
