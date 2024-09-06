#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int num, dif, cant, i;

    cout << "Ingrese el numero: " << endl;
    cin >> num;

    cout << "Ingrese la diferencia: " << endl;
    cin >> dif;

    cout << "Ingrese la cantidad a mostrar: " << endl;
    cin >> cant;

    for (i = 1; i <= cant; i++)
    {
        cout << "El valor en la posicion: " << i << " es " << num * pow(dif, i - 1) << endl;
    }
}