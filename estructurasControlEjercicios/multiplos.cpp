#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 0, aux = 0;
    cout << "Ingrese numero a: " << endl;
    cin >> a;
    cout << "Ingrese numero b: " << endl;
    cin >> b;
    for (aux = 1; aux <= b; aux++)
    {
        cout << "Multiplos de " << a << " x " << aux << ": " << a * aux << endl;
    }
    return 0;
}