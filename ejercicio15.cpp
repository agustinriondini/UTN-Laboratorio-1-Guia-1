#include <iostream>
#include <cstring>

using namespace std;

//Consigna ejercicio:
//La amplitud térmica es la diferencia entre la temperatura máxima y la temperatura mínima en una zona y tiempo determinado. Dada la temperatura máxima y la temperatura mínima de San Fernando de ayer, calcular y mostrar la amplitud térmica.



int main (){

    //variables:
    int Mtemp=0, mtemp=0, amplitud;
    string dev ="Resolucion de ejercicios Juan Agustin Riondini -- UTN-FRGP--LABORATORIO--1--";
    string notif = "================================== EJERCICIO 15 GUIA 1 ==================================";
    string consigna = "La amplitud térmica es la diferencia entre la temperatura máxima y la temperatura mínima en una zona y tiempo determinado. Dada la temperatura máxima y la temperatura mínima de San Fernando de ayer, calcular y mostrar la amplitud térmica.";
    string separador = " ============== ", blank = "  ";
    //Dev:
    cout << dev << endl;

    //Alert:

    cout << notif << endl;
    cout << endl;
    cout << consigna << endl;
    cout << endl;

    //Inicio programa:

    cout << "================== SISTEMA DE MEDICION Y ESTADISTICA TERMICA NACIONAL ==================" << endl;
    cout << endl;
    cout << "Ingrese la temperatura minima: (0°C establecidos por defecto)" << endl;
    cout << "°C"; cin >> mtemp;
    cout << endl;
    cout << "Ingrese la temperatura maxima: (0°C establecidos por defecto)" << endl;
    cout << "°C"; cin >> Mtemp;
    cout << endl;



    //Operaciones:

    amplitud = (Mtemp-mtemp)+1;

    if (mtemp>=Mtemp){
        cout << "Ha ingresado datos incorrectos, la temperatura maxima no puede ser menor a la minima" << endl;
    }else{
        cout << "La amplitud termica es " << amplitud << " °C" << endl;
    }




    //Fin_del_programa:

    return 0;
}
