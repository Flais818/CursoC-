#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x = 0, resultado = 0;
    cout << "Ingrese el valor de X: " << endl;
    cin >> x;
    resultado = (5 * pow(x, 3)) + (7 * pow(x, 2)) + (3 * x) + 9;
    cout << "El polinomio es: " << resultado << endl;
    return 0;
}