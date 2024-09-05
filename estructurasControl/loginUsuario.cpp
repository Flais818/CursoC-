#include <iostream>

using namespace std;

int main()
{
    string nombre = "", psw1 = "", psw2 = "";
    cout << "Ingrese nombre: " << endl;
    cin >> nombre;
    cout << "Ingrese password: " << endl;
    cin >> psw1;

    do
    {
        cout << "Ingrese nuevamente password: " << endl;
        cin >> psw2;
        if (psw1 != psw2)
        {
            cout << "Passwords no coinciden" << endl;
        }

    } while (psw1 != psw2);
    cout << "Cuenta creada con exito" << endl;
    return 0;
}