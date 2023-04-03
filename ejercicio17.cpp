#include <iostream>
#include <cstring>

using namespace std;

//Consigna ejercicio:
//El Laboratorio Gonzalez&Velez hace frascos de píldoras para aprender a programar. Cada frasco contiene 75 píldoras y cada píldora contiene 45mg de Briancetamol, 2grs de Pintoxicilina y 7mg de Ácido Simonítico.
//Nos solicitan un programa donde se ingrese la cantidad de frascos de un pedido y muestre la cantidad de miligramos de Briancetamol, Pintoxicilina y de Ácido Simonítico que son necesarios para elaborarlos.




int main (){

    //variables:

    int briacetamol_en_pildora, pintoxicilina_en_pildora, acido_s_en_pildora, frascos, cantidadPildoras, pildoras_en_frasco, briancetamolTotal, pintoxicilinaTotal, acido_simoniticoTotal;

    //Valores
    briacetamol_en_pildora = 45;
    pintoxicilina_en_pildora = 2;
    acido_s_en_pildora = 7;
    pildoras_en_frasco = 75;

    string dev ="Resolucion de ejercicios Juan Agustin Riondini -- UTN-FRGP--LABORATORIO--1--";

    string notif = "================================== EJERCICIO 17 GUIA 1 ==================================";
    string separador = " ============== ", blank = "  ";
    //Dev:
    cout << dev << endl;

    //Alert:

    cout << notif << endl;
    cout << endl;

    //Inicio programa:

    cout << "================== LABORATORIO GONZALEZ & VELEZ ==================" << endl;
    cout << endl;
    cout << "Ingrese la cantidad de frascos a solicitar: " << endl;
    cout << "Unidades: "; cin >> frascos;
    cout << endl;




    //Operaciones:

    cantidadPildoras = pildoras_en_frasco*frascos;
    briancetamolTotal = cantidadPildoras*briacetamol_en_pildora;
    pintoxicilinaTotal= cantidadPildoras*pintoxicilina_en_pildora;
    acido_simoniticoTotal = cantidadPildoras* acido_s_en_pildora;


    cout << "=================== DETALLES DEL PEDIDO ===================" << endl;
    cout << endl;
    cout << "Se solicitaron " << frascos << " frascos" << " que contienen la cantidad de " << cantidadPildoras << " pildoras" << endl;
    cout << endl;
    cout << "=================== CONTENIDO QUIMICO DEL PEDIDO TOTAL ===================" << endl;
    cout << endl;
    cout << "Briacetamol: " << blank << briancetamolTotal << blank << "mg" << endl;
    cout << "Pintoxitocilina: " << blank << pintoxicilinaTotal << blank << "mg" << endl;
    cout << "Acido Simonitico: " << blank << acido_simoniticoTotal << blank << "mg" << endl;

    //Fin_del_programa:

    return 0;
}
