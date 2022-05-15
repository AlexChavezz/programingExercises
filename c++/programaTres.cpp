/*
    Una empresa de importaciones requiere calcular el monto de compra de productos a pagar por parte del cliente
    , el ingreso de productos terminara cuando se ingrese una cantidad igual a 0 
*/

#include <iostream>
using namespace std;

int main(){
    bool isnotCero = true;
    int i = 1;
    int valor, res=0;
    while(isnotCero){
        cout<<"Ingresa valor del producto ["<<i<<"]: ";
        cin>>valor;
        res += valor;
        if(valor == 0){
            isnotCero = false;
        }
        i++;
    }
    cout<<"El precio final es: "<<res<<endl;
    return 0;
}