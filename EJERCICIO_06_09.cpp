/* Materia: Programación I, Paralelo 1

// Autor: Marvin Mollo Ramirez

// Fecha creación: 23/10/2023

// Fecha modificación: 23/10/2023

// Número de ejericio: 9

// Problema planteado:Realizar un algoritmo recursivo para calcular el coeficiente binomial a partir de
la lectura de dos números enteros, a partir de la relación:
*/
#include <iostream>
using namespace std;
int factorial(int n){
    if(n==0)
        n=1;
    else
        n=n*factorial(n-1);
    return n;
}
int main(){
    int n;
    int m;
    int nm=n-m;

    setlocale(LC_ALL, "");
    cout<< "ingrese un valor n ";
    cin>> n;

    int n1= factorial(n);
    cout<<"ingrese un valor m: ";
    cin>>m;
    
    cout<<"la combinatoria es: "<< factorial(n)/(factorial(n-m)*factorial(m));
    return 0;
}

