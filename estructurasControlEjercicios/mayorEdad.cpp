#include <iostream>

using namespace std;

int main()
{
    int edad = 0;
    cout << "Ingrese edad" << endl;
    cin >> edad;

    if (edad >= 18)
    {
        cout << "Es mayor de edad" << endl;
    }
    else
    {
        cout << "Es menor de edad" << endl;
    }

    return 0;
}