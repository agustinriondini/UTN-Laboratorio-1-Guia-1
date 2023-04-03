#include <iostream>
#include <cstring>

using namespace std;

//Consigna ejercicio:
//Hacer un programa para ingresar por teclado una cantidad de horas y mostrar por pantalla a cuantos días y horas equivalen.



int main (){

    //variables:
    int horas, restoH, dias;
    string dev ="Resolucion de ejercicios Juan Agustin Riondini -- UTN-FRGP--LABORATORIO--1--";
    string notif = "================================== EJERCICIO 10 GUIA 1 ==================================";
    string consigna = "Hacer un programa para ingresar por teclado una cantidad de horas y mostrar por pantalla a cuantos días y horas equivalen.";
    string separador = ":", blank = "  ";

    //Dev:
    cout << dev << endl;

    //Alert:

    cout << notif << endl;
    cout << endl;
    cout << consigna << endl;
    cout << endl;

    //Inicio programa:

    cout << "Ingrese una cantidad X de horas para calcular la cantidad de dias transcurridos en ese periodo:" << endl;
    cout << "Horas: "; cin >> horas;
    cout << endl;

    //Operaciones:

    dias = horas/24;
    restoH = horas % 24;

    cout << "Resultado" << blank << dias << "dd" << separador << horas << endl;
    cout << endl;
    cout << "En detalle: ";
    cout << "Dias: " << dias << blank << "Horas: " << restoH << endl;

    //Fin_del_programa:

    return 0;
}
