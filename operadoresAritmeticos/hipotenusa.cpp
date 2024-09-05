#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a = 0, b = 0, hipo = 0;
    cout << "Ingresa el lado a: " << endl;
    cin >> a;
    cout << "Ingresa el lado b: " << endl;
    cin >> b;
    hipo = sqrt(pow(a, 2) + pow(b, 2));
    cout << "La hipotenusa es de: " << hipo << endl;
    return 0;
}