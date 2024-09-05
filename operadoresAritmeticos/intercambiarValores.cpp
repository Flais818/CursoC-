#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 0, aux = 0;
    cout << "Ingrese el valor a: " << endl;
    cin >> a;

    cout << "Ingrese el valor b: " << endl;
    cin >> b;

    aux = a;
    a = b;
    b = aux;

    cout << "El valor de a es: " << a << endl;
    cout << "El valor de b es: " << b << endl;

    return 0;
}