/* Materia: Programación I, Paralelo 1

// Autor: Marvin Mollo Ramirez

// Fecha creación: 23/10/2023

// Fecha modificación: 23/10/2023

// Número de ejericio: 4

// Problema planteado:Realizar un algoritmo recursivo que escriba al revés una cadena.
*/
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string invertirCadena(const string& input) {
    string invertida = input;
    reverse(invertida.begin(), invertida.end());
    return invertida;
}

int main() {
    string input;
    cout << "Ingrese una cadena: ";
    cin >> input;

    string invertida = invertirCadena(input);
    cout << "Cadena invertida: " << invertida << endl;

    return 0;
}