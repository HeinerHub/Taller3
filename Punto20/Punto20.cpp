/*
* Programa: Ingresar todos los numeros enteros deseados
* Fecha: 21-08-2018
* Autor: Heiner Colorado Castañeda
*/
#include <stdio.h>
using namespace std;

int main() 
{
	int suma = 0, n ;
	
	do
		{
		scanf("%d" , &n);
		suma = suma + n;
	} while(n!=0);
	
	printf("La suma de los numeros ingresados es: %d", suma);
	
	return 0;
}

