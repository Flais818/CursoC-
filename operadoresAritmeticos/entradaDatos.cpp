#include <iostream>

using namespace std;
int main()
{
    int numero1 = 0, numero2 = 0, suma = 0;

    cout << "Ingrese un valor entero" << endl;
    cin >> numero1; // Para leer el valor y asignarlo a una variable

    cout << "Ingrese otro valor entero" << endl;
    cin >> numero2;

    suma = numero1 + numero2;

    cout << "El resultado de la suma es: " << suma << endl;

    return 0;
}