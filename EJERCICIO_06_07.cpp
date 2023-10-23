/* Materia: Programación I, Paralelo 1

// Autor: Marvin Mollo Ramirez

// Fecha creación: 23/10/2023

// Fecha modificación: 23/10/2023

// Número de ejericio: 7

// Problema planteado:Realizar un algoritmo recursivo para el siguiente problema: un granjero ha
comprado una pareja de conejos para criarlos y luego venderlos. Si la pareja de
conejos produce una nueva pareja cada mes y la nueva pareja tarda un mes
más en ser también productiva, ¿cuántos pares de conejos podrá poner a la
venta el granjero al cabo de un año?

*/
#include <iostream>

using namespace std;

int contarParejasDeConejos(int mes) {
    if (mes == 1) {
        return 1; // En el primer mes, hay una pareja de conejos.
    }
    if (mes == 2) {
        return 2; // En el segundo mes, hay dos parejas de conejos.
    }
    return contarParejasDeConejos(mes - 1) + contarParejasDeConejos(mes - 2);
}

int main() {
    int mes = 12; // Número de meses en un año

    int parejasDeConejos = contarParejasDeConejos(mes);

    cout << "Después de " << mes << " meses, el granjero podrá poner a la venta " << parejasDeConejos << " parejas de conejos." << endl;

    return 0;
}
