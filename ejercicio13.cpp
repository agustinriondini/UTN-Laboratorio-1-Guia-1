#include <iostream>
#include <cstring>

using namespace std;

//Consigna ejercicio:
//Hacer un programa para un cajero automático para ingresar un importe a retirar y convertir el mismo en la cantidad de billetes de $ 1.000, $ 500, $ 200 y $ 100 a entregar



int main (){

    //variables:
    int retiro, billetes1000, billetes500, billetes200, billetes100, resto;
    string dev ="Resolucion de ejercicios Juan Agustin Riondini -- UTN-FRGP--LABORATORIO--1--";
    string notif = "================================== EJERCICIO 13 GUIA 1 ==================================";
    string consigna = "Hacer un programa para un cajero automático para ingresar un importe a retirar y convertir el mismo en la cantidad de billetes de $ 1.000, $ 500, $ 200 y $ 100 a entregar";
    string separador = ":", blank = "  ";

    //Dev:
    cout << dev << endl;

    //Alert:

    cout << notif << endl;
    cout << endl;
    cout << consigna << endl;
    cout << endl;

    //Inicio programa:

    cout << "================== CAJERO AUTOMATICO BANCO HYPERBANK S.A. ==================" << endl;
    cout << endl;
    cout << "Ingrese el importe que desea retirar: " << endl;
    cout << "$"; cin >> retiro;
    cout << endl;

    //Operaciones:

    billetes1000 = retiro / 1000;
    resto = retiro % 1000;

    billetes500 = resto / 500;
    resto = resto % 500;

    billetes200 = resto / 200;
    resto = resto % 200;

    billetes100 = resto / 100;
    resto = resto % 100;

    cout << "Su solicitud fue aprobada, el retiro de dinero se le gestiono con: " << endl;
    cout << endl;
    cout << "Billetes de $1000: " << billetes1000 << endl << "Billetes de $500: " << billetes500 << endl << "Billetes de $200: " << billetes200 << endl << "Billetes de $100: " << billetes100 << endl;

    //Fin_del_programa:

    return 0;
}
