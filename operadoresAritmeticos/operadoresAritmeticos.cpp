#include <iostream>

using namespace std;

int main()
{
    int a = 12, b = 5, suma = 0, multi = 0;
    float resta = 0, divi = 0, modu = 0;
    suma = a + b;
    resta = a - b;
    multi = a * b;
    divi = a / (float)b; // Se casteo el int a float para obtener los decimales
    modu = a % b;

    cout << "La suma es: " << suma << endl;
    cout << "La resta es: " << resta << endl;
    cout << "La multi es: " << multi << endl;
    cout << "La divi es: " << divi << endl;
    cout << "La modu es: " << modu << endl;
    return 0;
}