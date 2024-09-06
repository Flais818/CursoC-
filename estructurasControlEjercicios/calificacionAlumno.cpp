#include <iostream>

using namespace std;

int main()
{
    float cal1 = 0, cal2 = 0, cal3 = 0, promedio = 0;
    cout << "Ingrese la calificacion 1: " << endl;
    cin >> cal1;
    cout << "Ingrese la calificacion 2: " << endl;
    cin >> cal2;
    cout << "Ingrese la calificacion 3: " << endl;
    cin >> cal3;

    promedio = (cal1 + cal2 + cal3) / 3;

    if (promedio < 40)
    {
        cout << "Insuficiente, reprobado" << endl;
        cout << "Promedio de: " << promedio << endl;
    }
    else if (promedio >= 40 && promedio <= 50)
    {
        cout << "Suficciente, aprobado" << endl;
        cout << "Promedio de: " << promedio << endl;
    }
    else if (promedio >= 50 && promedio <= 60)
    {
        cout << "Bueno, aprobado" << endl;
        cout << "Promedio de: " << promedio << endl;
    }
    else if (promedio > 60)
    {
        cout << "Excelente, aprobado" << endl;
        cout << "Promedio de: " << promedio << endl;
    }
    return 0;
}