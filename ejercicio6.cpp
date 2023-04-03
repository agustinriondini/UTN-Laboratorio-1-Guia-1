#include <iostream>
#include <cstring>
using namespace std;

//Hacer un programa para que un comercio ingrese por teclado la recaudación en pesos para
//cada una de las cuatro semanas del mes. El programa debe listar la recaudación promedio por semana
//y el porcentaje de recaudación por semana.

int main (){

    float totalporcentajes, recaudacion, promedio, porcentajes1=0, porcentajes2=0, porcentajes3=0, porcentajes4=0,semana=0, semana2=0, semana3=0, semana4=0;
    string dev ="Resolucion de ejercicios Juan Agustin Riondini -- UTN-FRGP--LABORATORIO--1--";

    cout << dev << endl;
    cout << "===================== EJERCICIO 6 =====================" << endl << "======= Baratelli SA =======" << endl;
    cout << endl;
    cout << "Calculador de promedio de recaudacion. Por favor ingrese los datos solicitados para poder calcular la informacion" << endl;
    cout << endl;
    cout << "Ingrese la recaudacion de la semana 1" << endl;
    cout << "$"; cin >> semana;
    cout << "Ingrese la recaudacion de la semana 2" << endl;
    cout << "$"; cin >> semana2;
    cout << "Ingrese la recaudacion de la semana 3" << endl;
    cout << "$"; cin >> semana3;
    cout << "Ingrese la recaudacion de la semana 4" << endl;
    cout << "$"; cin >> semana4;

    //operaciones

    recaudacion = (semana+semana2+semana3+semana4);
    promedio = recaudacion/4;
    porcentajes1 = (semana*100)/recaudacion;
    porcentajes2 = (semana2*100)/recaudacion;
    porcentajes3 = (semana3*100)/recaudacion;
    porcentajes4 = (semana4*100)/recaudacion;
    totalporcentajes = porcentajes1+porcentajes2+porcentajes3+porcentajes4;

    cout << "============================ GENERACION DE INFORME ============================" << endl;
    cout << "======================================================== BARATELLI S.A. =======" << endl;
    cout << "===============================================================================" << endl;
    cout << "semana  $" << semana << " ============= " << porcentajes1 << "%" << endl;
    cout << "semana1 $" << semana2 << " ============= " << porcentajes2 << "%" << endl;
    cout << "semana2 $" << semana3 << " ============= " << porcentajes3 << "%" << endl;
    cout << "semana3 $" << semana4 << " ============= " << porcentajes4 << "%" << endl;
    cout << "===============================================================================" << endl;
    cout << "Promedio de recaudacion semanal: $" << promedio << endl;
    cout << "Total recaudado este mes: $" << recaudacion << " porcentaje total " << totalporcentajes << "%" << endl;

	return 0;
}
