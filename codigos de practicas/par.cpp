#include <iostream>

using namespace std;

main()
 {
    int numero = 0;
    cout << "Ingrese su numero ";
    cin >> numero;

    if(numero % 2 == 0){
    cout << " Su numero es par\n";
    }
    else
    {
    cout << " Su numero es impar\n";
    }

    return 0;

}