/* Materia: Programación I, Paralelo 1

// Autor: Marvin Mollo Ramirez

// Fecha creación: 23/10/2023

// Fecha modificación: 23/10/2023

// Número de ejericio: 2

// Problema planteado: Realizar un algoritmo para generar la secuencia: 1, 1, 2, 4, 8, 16, 23, 28, 38,
49,..., para n términos.
*/
#include <iostream>
using namespace std;
int separador(int n){
	int suma=0;
	if (n==0)
		suma=0;
	else
		suma=(n%10)+separador(n/10);
		
	return suma;
}
int secuencia(int n){
	if(n==1 || n==2)
		return 1;
	else
		return separador(secuencia(n-1))+secuencia(n-1);
		
	
}
int main(){
	int n;
	cout<<"ingrese n";
	cin >> n;
	for (int i=1; i<=n;i++){
		cout<<secuencia(i)<<" ";
	}
}