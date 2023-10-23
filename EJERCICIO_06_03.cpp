/* Materia: Programación I, Paralelo 1

// Autor: Marvin Mollo Ramirez

// Fecha creación: 23/10/2023

// Fecha modificación: 23/10/2023

// Número de ejericio: 3

// Problema planteado:Realizar un algoritmo recursivo, dado un vector de números enteros, retorne la
suma de sus elementos.
*/
#include <iostream>
using namespace std;
int sumav(int vector[], int n){
    int i=0;
    int suma=0;
    if (n==i)
        return suma;
    else 
        return vector[0]+sumav(vector +1, n-1);

};
int main(){
    int n;
    cout<<"ingrese el tamano del vector"<<endl;
    cin >> n;
    int vector[n];
    for(int i=0; i<n; i++){
        cin>>vector[i];
    }
    cout <<"la suma es: "<< sumav(vector, n);
    return 0;
}