#include <iostream>

using namespace std;

int main()
{

    float dolar = 0, euro = 0, clp = 0, cantidad = 0;
    int resp = 0;
    cout << "Ingrese el tipo de cambio: " << endl;
    cout << "1:Dolar-Euro: " << endl;
    cout << "2:Euro-Dolar: " << endl;
    cout << "3:Dolar-Clp; " << endl;
    cout << "4:Clp-Dolar: " << endl;
    cout << "5:Euro-Clp: " << endl;
    cout << "6:Clp-Euro: " << endl;
    cin >> resp;
    cout << "Ingresa cantidad a convertir: " << endl;
    cin >> cantidad;

    switch (resp)
    {
    case 1:
        euro = cantidad * 0.91;
        cout << "La coversion de Dolar a Euro es de: " << euro << endl;
        break;
    case 2:
        dolar = cantidad * 1.1;
        cout << "La coversion de Euro a Dolar es de: " << dolar << endl;
        break;
    case 3:
        clp = cantidad * 807;
        cout << "La coversion de Dolar a Clp es de: " << clp << endl;
        break;
    case 4:
        dolar = cantidad * 0.0013;
        cout << "La coversion de Clp a Dolar es de: " << dolar << endl;
        break;
    case 5:
        clp = cantidad * 862;
        cout << "La coversion de Euro a Clp es de: " << clp << endl;
        break;
    case 6:
        euro = cantidad * 0.0012;
        cout << "La coversion de Clp a Euro es de: " << euro << endl;
        break;

    default:
        cout << "Opcion invalida" << endl;
        break;
    }

    return 0;
}