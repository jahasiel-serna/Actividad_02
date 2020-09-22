#include <iostream>

using namespace std;

int main() {
    string nombre;
    int edad;
    cout << "Ingresa tu nombre: ";
    cin >> nombre;
    cout << "Ingresa tu edad: ";
    cin >> edad;
    cout << "Hola " << nombre << "!" << endl << "Vas a cumplir " << edad + 1 << endl;
    return 0;
}