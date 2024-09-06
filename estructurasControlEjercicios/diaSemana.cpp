#include <iostream>

using namespace std;

int main()
{
    int dia = 0;
    cout << "Ingrese un numero entre 1 y 7: " << endl;
    cin >> dia;
    switch (dia)
    {
    case 1:
        cout << "El dia es Lunes" << endl;
        break;
    case 2:
        cout << "El dia es Martes" << endl;
        break;
    case 3:
        cout << "El dia es Miercoles" << endl;
        break;
    case 4:
        cout << "El dia es Jueves" << endl;
        break;
    case 5:
        cout << "El dia es Viernes" << endl;
        break;
    case 6:
        cout << "El dia es Sabado" << endl;
        break;
    case 7:
        cout << "El dia es Domingo" << endl;
        break;

    default:
        cout << "Numero no valido (nmms pendej*)" << endl;
        break;
    }
    return 0;
}