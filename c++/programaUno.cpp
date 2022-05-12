/*
    Desarrolla un programa que crea un vector de longitud N con numeros enteros positivos 
    y negativos, apartir de este vector generar un nuevo vector binario, donde los numeros negativos sean 0
    y los positivos sean 1;
*/

#include <iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Ingresa la dimension del arreglo: ";
    cin >>size;
    int array[size];
    int arrayBinario[size];
    for ( int i = 0; i < size; i++){
        cout<<"Ingresa el valor de la posicion ["<<i<<"]: ";
        cin>>array[i];
        if (array[i] >= 0){
            arrayBinario[i] = 1;
        }else{
            arrayBinario[i] = 0;
        }
    }
    cout<<"Array Original."<<endl;
    for( int i = 0; i < size; i++){
        cout<<array[i];
    }

    cout<<"\nArray Binario"<<endl;
    for( int i = 0; i < size; i++){
        cout<<arrayBinario[i];
    }
    cout<<"\n";

    return 0;
}