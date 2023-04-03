#include <iostream>
#include <cstring>

using namespace std;

//Consigna ejercicio:
//Hacer un programa para ingresar una letra en mayúsculas en una variable de tipo char y mostrar cuántas letras de diferencia hay en el alfabeto con respecto a la 'A'..



int main (){

    //variables:
    char letra;
    int ubicaciones;

    string dev ="Resolucion de ejercicios Juan Agustin Riondini -- UTN-FRGP--LABORATORIO--1--";
    string notif = "================================== EJERCICIO 16 GUIA 1 ==================================";
    string consigna = "Hacer un programa para ingresar una letra en mayúsculas en una variable de tipo char y mostrar cuántas letras de diferencia hay en el alfabeto con respecto a la 'A'";
    string separador = " ============== ", blank = "  ";
    //Dev:
    cout << dev << endl;

    //Alert:

    cout << notif << endl;
    cout << endl;
    cout << consigna << endl;
    cout << endl;

    //Inicio programa:

    cout << "================== CONTABILIZADOR ABCD ==================" << endl;
    cout << endl;
    cout << "Ingrese una letra en mayuscula de la A-Z " << endl;
    cout << "Letra: "; cin >> letra;
    cout << endl;




    //Operaciones:

    ubicaciones = letra - 'A';

    cout << "Hay " << ubicaciones << " con respecto a la letra " << letra << " y la a" << endl;


    //Fin_del_programa:

    return 0;
}
