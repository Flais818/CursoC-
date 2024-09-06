#include <iostream>

using namespace std;

int main()
{

    int numero1 = 0, diferencia = 0, cantidadNumeros = 0, i = 0;

    cout << "Ingrese un numero: " << endl;
    cin >> numero1;
    cout << "Ingrese la diferencia: " << endl;
    cin >> diferencia;
    cout << "Cuantos numeros desea en la sucesion" << endl;
    cin >> cantidadNumeros;

    for (i = 1; i <= cantidadNumeros; i++)
    {
        cout << "El valor en la posicion: " << i << " es " << numero1 + (diferencia * (i - 1)) << endl;
    }
    cout << "Ingrese la posicion a consultar: " << endl;
    cin >> i;
    cout << "El numero en la posicion: " << i << " es " << numero1 + (diferencia * (i - 1)) << endl;

    return 0;
}