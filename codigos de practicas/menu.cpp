#include <iostream>

using namespace std;

int main(){

    char l;

    do {
        cout <<  "Elija una opcion del menu:\n A: Pollo frito\n B: Carne asada\n C: Chuleta de cerdo\n O presione 'X' para salir\n";
        cin >> l;

        switch(l) { 

            case 'a':
            cout << "Opcion A\n";
            break;

            case 'b':
            cout << "Opcion B\n";
            break;

            case 'c':
            cout << "Opcion C\n";
            break;

            case 'x':
            cout << "Saliendo del programa.\n";
            break;

            default:
            cout << "Opcion invalida\n";
            break;


        }
    } while(l != 'x');

    return 0;

}
