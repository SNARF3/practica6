/* Materia: Programación I, Paralelo 1

// Autor: Marvin Mollo Ramirez

// Fecha creación: 23/10/2023

// Fecha modificación: 23/10/2023

// Número de ejericio: 8

// Problema planteado:. Realizar un algoritmo recursivo que nos diga si una cadena de caracteres es
simétrica
*/
#include <iostream>
#include <string>
using namespace std;


bool esSimetrica(const string& cadena, int inicio, int fin) {
    
    if (inicio >= fin) {
        return true;
    }

 
    if (cadena[inicio] == cadena[fin]) {
  
        return esSimetrica(cadena, inicio + 1, fin - 1);
    } else {
        return false; 
    }
}

int main() {
    string cadena;
    cout << "Ingrese una cadena: ";
    cin >> cadena;

    if (esSimetrica(cadena, 0, cadena.length() - 1)) {
        cout << "La cadena es simetrica." << endl;
    } else {
        cout << "La cadena no es simetrica." << endl;
    }

    return 0;
}
