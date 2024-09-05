#include <iostream>

using namespace std;

int main()
{
    double inversion = 0, rentabilidad = 1.09;
    int tiempo = 0, total = 0;

    cout << "Ingrese la cantidad de la inversion: " << endl;
    cin >> inversion;

    while (tiempo < 5)
    {
        inversion = inversion * rentabilidad;
        tiempo++;
    }
    total = (int)inversion;
    cout << "La ganancia despues de 5 anios es de: " << total << endl;

    return 0;
}