
/* Materia: Programación I, Paralelo 1

// Autor: Marvin Mollo Ramirez

// Fecha creación: 23/10/2023

// Fecha modificación: 23/10/2023

// Número de ejericio: 1

// Problema planteado:Realizar un algoritmo recursivo para calcular el máximo común divisor de dos
números enteros aplicando el algoritmo de Euclides.

*/
#include <iostream> 
using namespace std;
int division(int num1, int num2){
    int division1=0, residuo=-1;
    if(num2==0)
        return num1;
    else {
        residuo=num1%num2;
        return division(num2, residuo);}
};
int main(){
    int num1, num2;
    cout<< "ingrese los numeros"<<endl;
    cin>>num1;cin>> num2;
    cout<< division(num1,num2);
}
