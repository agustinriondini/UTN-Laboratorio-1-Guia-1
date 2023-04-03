#include <iostream>
#include <cstring>

using namespace std;

//Consigna ejercicio:
//Hacer un programa para ingresar por teclado una cantidad de minutos y mostrar por pantalla a cuántos días, horas y minutos equivalen.



int main (){

    //variables:
    int minutos, restoM, horas, restoH, dias;
    string dev ="Resolucion de ejercicios Juan Agustin Riondini -- UTN-FRGP--LABORATORIO--1--";
    string notif = "================================== EJERCICIO 11 GUIA 1 ==================================";
    string consigna = "Hacer un programa para ingresar por teclado una cantidad de minutos y mostrar por pantalla a cuántos días, horas y minutos equivalen";
    string separador = ":", blank = "  ";

    //Dev:
    cout << dev << endl;

    //Alert:

    cout << notif << endl;
    cout << endl;
    cout << consigna << endl;
    cout << endl;

    //Inicio programa:

    cout << "Ingrese una cantidad X de minutos para calcular dias, horas, minutos: " << endl;
    cout << "Minutos: "; cin >> minutos;
    cout << endl;

    //Operaciones:

    dias = minutos / (24 * 60);
    horas = (minutos % (24 * 60)) / 60;
    restoH = minutos % 60;

    cout << "Resultado: " << blank << dias << "dd" << separador << horas << "hs" << separador << restoH<< "'" << endl;
    cout << endl;
    cout << "En detalle: ";
    cout << "Dias: " << dias << blank << "Horas: " << horas << blank << "Minutos: " << restoH << endl;

    //Fin_del_programa:

    return 0;
}
