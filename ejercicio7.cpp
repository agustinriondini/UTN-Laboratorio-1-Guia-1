#include <iostream>
#include <cstring>

using namespace std;

//Consigna ejercicio:
//Hacer un programa para ingresar por teclado el importe de una venta y el porcentaje de descuento aplicada a la misma y luego informar por pantalla el importa a pagar.


int main (){

    //variables:
    float importeProducto, descuento, porDto, totalGeneral;
    string dev ="Resolucion de ejercicios Juan Agustin Riondini -- UTN-FRGP--LABORATORIO--1--";
    string notif = "================================== EJERCICIO 7 GUIA 1 ==================================";
    string consigna = "Hacer un programa para ingresar por teclado el importe de una venta y el porcentaje de descuento aplicada a la misma y luego informar por pantalla el importa a pagar.";
    string finalmsg = "El importe a cobrar es de: $", blank = "  ";

    //Dev:
    cout << dev << endl;

    //Alert:

    cout << notif << endl;
    cout << endl;
    cout << consigna << endl;
    cout << endl;

    //Inicio programa:

    cout << "Ingrese un valor de venta x: " << endl;
    cout << "$"; cin >> importeProducto;
    cout << endl;
    cout << "Imagine que otorga un descuento, ingrese el porcentaje de descuento. (solo el numero sin el simbolo %)" << endl;
    cin >> descuento;
    cout << endl;

    //Operaciones:

    totalGeneral = importeProducto-(importeProducto*descuento)/100;

    cout << finalmsg << blank << totalGeneral;

    //Fin_del_programa:

    return 0;
}
