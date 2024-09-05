#include <iostream>

using namespace std;

int main()
{
    float kilos = 0, libras = 0, FACTOR_CONVERSION = 2.205;

    cout << "Ingrese la cantidad de kilos: " << endl;
    cin >> kilos;
    libras = kilos * FACTOR_CONVERSION;

    cout << "La conversion de kilo a libra es: " << libras << endl;

    cout << "Ingrese la cantidad de libras: " << endl;
    cin >> libras;
    kilos = libras / FACTOR_CONVERSION;

    cout << "La conversion de libras a kilos es: " << kilos << endl;
    return 0;
}