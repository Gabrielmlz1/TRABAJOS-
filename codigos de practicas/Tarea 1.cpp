#include <iostream>

using namespace std;

main() {

    char n;

    cout << "Ingrese un numero para determinar su color correspondiente, los numeros son 1, 2, 3, 4 y 5. \n";

    cin >> n;

    switch(n)
    {
        case '1':
        cout << "Su color es Negro. \n";
        break;

        case '2':
        cout << "Su color es Verde. \n";
        break;

        case '3':
        cout << "Su color es Amarrillo. \n";
        break;

        case '4':
        cout << "Su color es Azul. \n";
        break;

        case '5':
        cout << "Su color es Anaranjado. \n";
        break;

        default:
        cout << "Datos ingresados invalidos \n";

    }

    return 0;

}