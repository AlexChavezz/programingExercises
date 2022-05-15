#include <iostream>
#include <vector>
using namespace std;

int getMax(vector <int> numeros){
    int numMax = 0;
    for( int i = 0; i < numeros.size(); i++){
        if(numMax < numeros[i]){
            numMax = numeros[i];
        }   
    }
    return numMax;
}


int main(){
    int size;
    cout<<"Cuantos numeros quieres en tu arreglo: ";
    cin>>size;
    vector<int> numeros(size);
    cout<<numeros.size();
    for ( int i = 0; i < numeros.size(); i++){
        cout<<"Ingresa el numero ["<<i<<"]: ";
        cin>>numeros[i];
    }

    int numMax = getMax(numeros);
    cout<<"El numero maximo es: "<<numMax<<endl;
    return 0;
}