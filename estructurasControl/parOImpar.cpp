#include <iostream>

using namespace std;

int main()
{

    int numero;
    cout << "Ingrese un numero" << endl;
    cin >> numero;
    if (numero % 2 == 0)
    {
        cout << "Numero par: " << numero << endl;
    }
    else
    {
        cout << "Numero impar: " << numero << endl;
    }

    return 0;
}