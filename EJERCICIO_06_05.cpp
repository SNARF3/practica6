/* Materia: Programación I, Paralelo 1

// Autor: Marvin Mollo Ramirez

// Fecha creación: 23/10/2023

// Fecha modificación: 23/10/2023

// Número de ejericio: 5

// Problema planteado:Realizar un algoritmo recursivo para comparar si dos vectores son iguales.
*/
#include <iostream>
using namespace std;

bool comparador(int vector1[], int vector2[], int n, int i) {

    if (i == n) {
        cout << "Son iguales" << endl;
        return true;
    }
    
    if (vector1[i] != vector2[i]) {

        cout << "No son iguales" << endl;
        return false;
    }
    
    return comparador(vector1, vector2, n, i + 1);
}

int main() {
    int vector1[] = {1, 2, 3, 4, 5};
    int vector2[] = {1, 2, 3, 4, 5};
    int n = 5;

    comparador(vector1, vector2, n, 0);

    return 0;
}
