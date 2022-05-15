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
#include <vector>
#include <cstdlib>
using namespace std;

void printUpperCase(vector<char> cadena)
{
    char letterUpper;
    for (int i = 0; i < cadena.size(); i++)
    {
        letterUpper = toupper(cadena[i]);
        cout << letterUpper;
    }
    cout << "\n";
}

int main()
{
    vector<char> cadena(30);
    bool flag = false;
    char letra[1];
    int numberCounter = 0, letterCouter = 0, n, opc;
    do
    {
        do
        {
            cout << "Cuantos caracteres quieres ingresar maximo 30: ";
            cin >> n;
        } while (n > 30 || n < 1);
        for (int i = 0; i < n; i++)
        {
            cout << "[" << i << "]: ";
            cin >> cadena[i];
            letra[0] = cadena[i];
            if (atoi(letra) != 0)
            {
                numberCounter++;
                letterCouter--;
            }
            letterCouter++;
        }
        cout << "El numero de carateres es: " << letterCouter << endl;
        cout << "El numero de numeros que hay es de : " << numberCounter << endl;
        cout<<"El numero de caracteres totales es: "<<n<<endl;
        printUpperCase(cadena);
        cout<<"Quieres Hacer un nuevo registro?\n(1) Si\n(2) No\n: ";
        cin>>opc;
        if(opc == 2){
            flag = false;
        }else{
            flag = true;
        }
    } while (flag);

    return 0;
}