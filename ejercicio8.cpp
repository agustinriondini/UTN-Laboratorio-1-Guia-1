#include <iostream>
#include <cstring>

using namespace std;

//Consigna ejercicio:
//Hacer un programa para ingresar por teclado el importe de una venta sin el descuento y el importe de esa misma venta con el descuento aplicado y luego informar por pantalla el porcentaje de descuento aplicada a la misma.



int main (){

    //variables:
    float importeProducto, descuento, conDto, totalGeneral, aux;
    string dev ="Resolucion de ejercicios Juan Agustin Riondini -- UTN-FRGP--LABORATORIO--1--";
    string notif = "================================== EJERCICIO 8 GUIA 1 ==================================";
    string consigna = "Hacer un programa para ingresar por teclado el importe de una venta sin el descuento y el importe de esa misma venta con el descuento aplicado y luego informar por pantalla el porcentaje de descuento aplicada a la misma";
    string finalmsg = "Total a cobrar sin descuento: ", finalmsg2 = "Porcentaje de descuento: " , blank = "  ", symbol = "$", symbol2 = "%";

    //Dev:
    cout << dev << endl;

    //Alert:

    cout << notif << endl;
    cout << endl;
    cout << consigna << endl;
    cout << endl;

    //Inicio programa:

    cout << "Ingrese el precio de venta de un producto X: " << endl;
    cout << "$"; cin >> importeProducto;
    cout << endl;
    cout << "Imagine que otorgo un decuento de X%. Cuanto debe abonar el cliente?" << endl;
    cout << "$"; cin >> conDto;
    cout << endl;

    //Operaciones:

    aux = importeProducto-conDto;
    descuento = aux*100/importeProducto;

    cout << finalmsg << blank << symbol << importeProducto << endl;
    cout << endl;
    cout << finalmsg2 << blank << descuento << symbol2 << endl;

    //Fin_del_programa:

    return 0;
}
