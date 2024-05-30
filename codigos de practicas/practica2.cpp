#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Ingrese un numero del 1 al 7: ";
    cin >> n;
    switch(n)
    {
        case 1:
        cout << n << " Lunes\n";
        break;

        case 2:
        cout << n << " Martes\n";
        break;

        case 3:
        cout << n << " Miercoles\n";
        break;

        case 4:
        cout << n << " Jueves\n";
        break;

        case 5:
        cout << n << " Viernes\n";
        break;

        case 6:
        cout << n << " Sabado\n";
        break;

        case 7:
        cout << n << " Domingo\n";
        break;


        default:
        cout << "Datos incorrectos\n";

    }
return 0;
}
