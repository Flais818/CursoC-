#include <iostream>

using namespace std;

int main()
{
    float km = 0, comb = 0, gasto = 0, costo = 0;
    cout << "Ingrese kilometros recorridos" << endl;
    cin >> km;

    cout << "Ingrese combustible consumido" << endl;
    cin >> comb;

    gasto = comb / km;
    costo = gasto * 880;

    cout << "El gasto de combustible por kilomentro: " << gasto << endl;
    cout << "El costo por kilomentro recorrido es de: " << costo << endl;

    return 0;
}