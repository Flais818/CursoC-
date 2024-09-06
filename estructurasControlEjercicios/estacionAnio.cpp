#include <iostream>

using namespace std;

int main()
{
    int dia = 0;
    string mes;

    cout << "Ingrese el dia del mes" << endl;
    cin >> dia;

    cout << "Ingrese el mes" << endl;
    cin >> mes;

    cout << "dia: " << dia << " mes: " << mes << endl;

    if ((mes == "enero" || mes == "febero") || (mes == "marzo" && dia <= 20) || (mes == "dicimebre" && dia > 20))
    {
        cout << "Verano" << endl;
    }
    else if ((mes == "abril" || mes == "mayo") || (mes == "marzo" && dia > 20) || (mes == "junio" && dia <= 20))
    {
        cout << "Otonio" << endl;
    }
    else if ((mes == "abril" || mes == "mayo") || (mes == "marzo" && dia > 20) || (mes == "junio" && dia <= 20))
    {
        cout << "Otonio" << endl;
    }
    else if ((mes == "julio" || mes == "agosto") || (mes == "septiembre" && dia <= 20) || (mes == "junio" && dia >= 21))
    {
        cout << "Invierno" << endl;
    }
    else if ((mes == "octubre" || mes == "noviembre") || (mes == "diciembre" && dia <= 20) || (mes == "septiembre" && dia >= 21))
    {
        cout << "Primavera" << endl;
    }

    return 0;
}