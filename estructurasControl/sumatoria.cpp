#include <iostream>

using namespace std;

int main()
{
    int num1 = 0, num2 = 0, suma = 0, aux = 0;

    cout << "Ingrese un numero: " << endl;
    cin >> num1;
    aux = num1;
    cout << "Ingrese un segundo numero: " << endl;
    cin >> num2;

    for (num1 == 0; num1 <= num2; num1++)
    {
        suma = suma + num1;
    }
    cout << "La sumatoria desde " << aux << " hasta " << num2 << " es de: " << suma << endl;

    return 0;
}