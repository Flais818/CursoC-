#include <iostream>

using namespace std;

int main()
{
    int numero = 0, i = 2;
    cout << "Ingrese un numero" << endl;
    cin >> numero;

    while (i < numero)
    {
        if (numero % i == 0)
        {
            cout << "El numero no es primo" << endl;
            return 0;
        }
        i++;
    }
    if (numero != 1)
    {
        cout << "El numero es primo" << endl;
    }
    else
    {
        cout << "El numero no es ni primo ni par" << endl;
    }
    return 0;
}