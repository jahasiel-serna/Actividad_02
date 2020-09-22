#include <iostream>
#include "funciones.h"

using namespace std;

int main() {
    string nombre;
    int edad;
    cout << "Ingresa tu nombre: ";
    cin >> nombre;
    cout << "Ingresa tu edad: ";
    cin >> edad;
    cout << "Hola " << nombre << "!" << endl << "Vas a cumplir " << suma(edad, 1) << endl;
    return 0;
}