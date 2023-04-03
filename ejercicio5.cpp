#include <iostream>
#include <cstring>
using namespace std;

//Un comercio vende tres marcas de alfajores distintas A, B y C.
//Hacer un programa para ingresar por teclado la cantidad de alfajores
//vendidos de cada una de las tres marcas y luego se informe el porcentaje
//de ventas para cada una de ellas.


int main (){

	int alfajoresVendidos = 0, alfajoresVendidos2 = 0, alfajoresVendidos3 = 0, totalGeneral;
	char marca1, marca2, marca3;
	float porMarca1, porMarca2, porMarca3;
	string Aguila, Balcarce, Cachafaz, a, b, c;
    string dev ="Resolucion de ejercicios Juan Agustin Riondini -- UTN-FRGP--LABORATORIO--1--";

    cout << dev << endl;
	cout << "===================== EJERCICIO 5 =====================" << endl << "======= Aerolinea Scaloneta =======" << endl;
	cout << "Exportadora de alfajores ===== Baretelli SA ====" << endl;
	cout << "Seleccione la marca de alfajores a facturar: " << endl << "Ingrese A para Aguila " << endl << "Ingrese B para Balcarce " << endl << "Ingrese C para Cachafaz" << endl;
	cin >> marca1;
	cout << "Cantidad de unidades vendidas" << endl;
	cin >> alfajoresVendidos;
	cout << "Ingrese la siguiente marca a facturar: " << endl;
	cin >> marca2;
	cout << "Cantidad de unidades vendidas" << endl;
	cin >> alfajoresVendidos2;
	cout << "Ingrese la siguiente marca a facturar: " << endl;
	cin >> marca3;
	cout << "Cantidad de unidades vendidas" << endl;
	cin >> alfajoresVendidos3;
	cout << "Calculando facturacion..." << endl;

	//operacion

		totalGeneral = alfajoresVendidos+alfajoresVendidos2+alfajoresVendidos3;
		porMarca1 = (alfajoresVendidos*100.00)/totalGeneral;
		porMarca2 = (alfajoresVendidos2*100.00)/totalGeneral;
		porMarca3 = (alfajoresVendidos3*100.00)/totalGeneral;

	cout << "========== FACTURACION =========== BARATELLI S.A. F000001" << endl;
	cout << endl;
	cout << "Se vendio un total de " << totalGeneral << " alfajores " << endl;
	cout << endl;
	cout << "Porcentaje de items: " << endl;
	cout << porMarca1 << "% de alfajores marca " << marca1 << endl;
	cout << porMarca2 << "% de alfajores marca " << marca2 << endl;
	cout << porMarca3 << "% de alfajores marca " << marca3 << endl;

	return 0;
}
