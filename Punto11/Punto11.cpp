/*
* Programa: Numeros pares que hay entre el 1 y el 1000
* Fecha: 21-08-2018
* Autor: Heiner Colorado Castañeda
*/


#include <stdio.h>
using namespace std;

int main() 
{
	int i, num = 1;
	
	for( i = 1; i <=1000; i ++)
	{
		printf("%d\n" , num * num);
		num = num + 1;
	}
	
	
	
	return 0;
}

