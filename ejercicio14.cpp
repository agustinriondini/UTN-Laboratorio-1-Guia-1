#include <iostream>
#include <cstring>

using namespace std;

//Consigna ejercicio:
//Hacer un programa para ingresar el importe de una compra y el descuento a aplicar. Listar por pantalla, el importe sin descuento, el descuento aplicado y el importe total a cobrar.



int main (){

    //variables:
    float dto, total, importe, bonificacion;
    string dev ="Resolucion de ejercicios Juan Agustin Riondini -- UTN-FRGP--LABORATORIO--1--";
    string notif = "================================== EJERCICIO 14 GUIA 1 ==================================";
    string consigna = "Hacer un programa para ingresar el importe de una compra y el descuento a aplicar. Listar por pantalla, el importe sin descuento, el descuento aplicado y el importe total a cobrar.";
    string separador = " ============== ", blank = "  ";

    //Dev:
    cout << dev << endl;

    //Alert:

    cout << notif << endl;
    cout << endl;
    cout << consigna << endl;
    cout << endl;

    //Inicio programa:

    cout << "================== FACTURACION SERVICIOS CENTRAL S.A. ==================" << endl;
    cout << endl;
    cout << "Ingrese el importe de la venta: " << endl;
    cout << "$"; cin >> importe;
    cout << endl;
    cout << "ingrese el descuento a aplicar sin el simbolo de %" << endl;
    cin >> dto;

    //Operaciones:

    bonificacion = importe*dto/100;
    total = importe-bonificacion;

    cout << "Subtotal" << separador << " $ " << importe << separador << endl;
    cout << endl;
    cout << "Tu bonificacion del: " << blank << dto << "%" << blank << "Equivale a: $" << bonificacion << endl;
    cout << endl;
    cout << separador << "Total final: $" << total << blank << separador << endl;

    //Fin_del_programa:

    return 0;
}
