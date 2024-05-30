#include <iostream>

using namespace std;

int main(){
    
    int menu = 0;
    string nombre[100]={};
    string usuario[100]={};
    string contrasena[100]={};
    string usuarioTemporal;
    string contrasenaTemporal;
    int edad[100]={};
    int indiceUsuario = 0;
    int indiceContrasena = 0;
    int indiceNombre = 0;

    do{

    cout << " --Menu de Inicio de sesion--" << endl;

    cout << "1. Inicio de sesion\n 2. Registrarse\n 3. Salir\n";
    cin >> menu;

    switch(menu){
    case 1:
    cout << "Ingrese su nombre de usuario:\n";
    cin >> contrasenaTemporal;
    for(int i = 0; i < 100; i++)
    {
    (usuarioTemporal == usuario[i])


    break;

    case 2:
    cout << "Ingrese su nombre completo: ";
    cin >> nombre[indiceNombre];
    cout << "Ingrese su edad: ";
    cin >> edad

    break;

    case 3:
    break;

    default:
    cout << "Opcion no valida.\n";}




}