#include <iostream>
#include <cstring>

using namespace std;

//Consigna ejercicio:
//Hacer un programa para ingresar por teclado una cantidad de minutos y mostrar por pantalla a cuantas horas y minutos equivalen.



int main (){

    //variables:
    int totalMinutos, horas, minutos, restoM;
    string dev ="Resolucion de ejercicios Juan Agustin Riondini -- UTN-FRGP--LABORATORIO--1--";
    string notif = "================================== EJERCICIO 9 GUIA 1 ==================================";
    string consigna = "Hacer un programa para ingresar por teclado una cantidad de minutos y mostrar por pantalla a cuantas horas y minutos equivalen.";
    string separador = ":", blank = "  ";

    //Dev:
    cout << dev << endl;

    //Alert:

    cout << notif << endl;
    cout << endl;
    cout << consigna << endl;
    cout << endl;

    //Inicio programa:

    cout << "Ingrese una cantidad X de minutos para calcular las horas, minutos y segundos en ese valor:" << endl;
    cout << "Minutos: "; cin >> totalMinutos;
    cout << endl;

    //Operaciones:

    horas = totalMinutos/60;
    minutos = totalMinutos % 60;

    cout << "Resultado" << blank << horas << separador << minutos << "'" << endl;
    cout << endl;
    cout << "En detalle: ";
    cout << "Horas: " << horas << blank << "Minutos: " << minutos << endl;

    //Fin_del_programa:

    return 0;
}
