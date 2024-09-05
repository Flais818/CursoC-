#include <iostream>
#include <iomanip> //Libreria para manipular datos Double
using namespace std;

int main()
{
    // Datos Enteros
    short numero = 1;                   // 2 Bytes
    int numeroEntero = 400000;          // 4 Bytes
    long long numeroLong = 400000000LL; // 8 Bytes
    // Datos Decimales
    float numeroFloat = 3.1415617957;     // Precision de 6 decimales
    double numeroDouble = 3.123456789987; // Precision de 15 decimales
    cout << setprecision(13);             // Necesario para mostrar mas de 4 decimales por default
    // Datos de Valor
    bool verdad = false;
    // Datos Primitivos
    char primitivo = 'a';

    cout << "El valor de primitivo es: " << primitivo << endl;
    cout << "El tamanio de primitivo es: " << sizeof(primitivo) << " Byts" << endl;

    return 0;
}