/*
    Solicite al usuario capturar una cadena, de maxico 30 caracteres, posteriormente a ello imprimir 
    la siguiente informacion:
    cantidad de letras
    cantidad de digitos numericos
    cantidad de otros caracteres 
    longitud de cadena 
    mostrar la cadena en mayusculas 
    Al final preguntar al usuario si desea ingresar una nueva captura de informacion
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

    // char cadena[30];
    // bool flag = false;
    // int numeroLetras = 0;
    // do {
    //     cout<<"Ingresa tu cadena\n: ";
    //     cin>>cadena;
    //     if (isInt('a'))
    //     flag = true;
    // }while(!flag);

    vector <int>numeros(2);
    numeros[1] = 11;
    numeros[0] = 19;
    for ( int i = 0; i < numeros.size(); i++){
        cout<<numeros[i]<<endl;
    }
    return 0;
}