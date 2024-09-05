#include <iostream>

using namespace std;

int main()
{
    float pdt1 = 0, pdt2 = 0, pdt3 = 0,
          desc1 = 0, desc2 = 0, desc3 = 0, total = 0;

    cout << "Ingrese el precio 1: " << endl;
    cin >> pdt1;

    cout << "Ingrese el precio 2: " << endl;
    cin >> pdt2;

    cout << "Ingrese el precio 3: " << endl;
    cin >> pdt3;

    cout << "Ingrese el descuento del producto 1: " << endl;
    cin >> desc1;

    cout << "Ingrese el descuento del producto 2: " << endl;
    cin >> desc2;

    cout << "Ingrese el descuento del producto 3: " << endl;
    cin >> desc3;

    total = (pdt1 * (1 - (desc1 / (float)100))) + (pdt2 * (1 - (desc2 / (float)100))) + (pdt3 * (1 - (desc3 / (float)100)));

    cout << "El total a pagar es de: " << total << endl;
    return 0;
}