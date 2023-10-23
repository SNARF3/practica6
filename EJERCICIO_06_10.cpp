/* Materia: Programación I, Paralelo 1

// Autor: Marvin Mollo Ramirez

// Fecha creación: 23/10/2023

// Fecha modificación: 23/10/2023

// Número de ejericio: 10

// Problema planteado:Realizar un algoritmo recursivo para elaborar un programa en el que dado un
entero n > 1, calcule e imprima los elementos correspondientes a la conjetura
de Ullman (en honor al matemático Ullman) que consiste en lo siguiente:
• Empiece con cualquier entero positivo.
• Si es par, divídalo entre 2; si es impar multiplíquelo por 3 y agréguele 1.
• Obtenga enteros sucesivamente repitiendo el proceso.
Al final se obtendrá el número 1, independientemente del entero inicial. Por
ejemplo, cuando el entero inicial es 26, la secuencia será:
26 13 40 20 10 5 16 8 4 2 1
*/
#include <iostream>

using namespace std;

void conjeturaUllman(int n) {
    // Imprime el número actual en la secuencia
    cout << n << " ";

    // Caso base: cuando n llega a 1, termina la conjetura
    if (n == 1) {
        return;
    }

    // Si el número es par, divídelo entre 2; si es impar, multiplícalo por 3 y suma 1
    if (n % 2 == 0) {
        conjeturaUllman(n / 2);
    } else {
        conjeturaUllman(3 * n + 1);
    }
}

int main() {
    int numeroInicial;
    cout << "Ingrese un entero positivo mayor que 1: ";
    cin >> numeroInicial;

    if (numeroInicial > 1) {
        conjeturaUllman(numeroInicial);
        cout << endl;
    } else {
        cout << "El número debe ser mayor que 1." << endl;
    }

    return 0;
}
