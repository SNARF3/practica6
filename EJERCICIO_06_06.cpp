/* Materia: Programación I, Paralelo 1

// Autor: Marvin Mollo Ramirez

// Fecha creación: 23/10/2023

// Fecha modificación: 23/10/2023

// Número de ejericio: 6

// Problema planteado:Realizar un algoritmo recursivo para la siguiente función:
*/
#include <iostream>
using namespace std;
int funcion(int n){
	int k;
	if (n==1)
		k=1;
	else if(n>1)
		k= funcion(n-1)+(n*n);
	return k;	
}
int main(){
	int n;
	cout<<"ingrese n";
	cin>>n;
	cout<<funcion(n);
}