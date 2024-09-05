#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 0, c = 0;
    float promedio = 0;
    cout << "Ingrese el valor 1: " << endl;
    cin >> a;
    cout << "Ingrese el valor 2: " << endl;
    cin >> b;
    cout << "Ingrese el valor 3: " << endl;
    cin >> c;
    promedio = (a + b + c) / (float)3;
    cout << "El promedio es: " << promedio << endl;
    return 0;
}