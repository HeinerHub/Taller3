/*
* Programa : Sumar los primeros numeros impares del 1 al 50
* Fecha : 22/08/18
* Autor: Heiner Colorado Castañeda	
*/

#include <iostream>
#include <stdio.h>
using namespace std;

int main() 
{
	
	int n = 1;
	printf("Numeros impares del 1 al 50 \n");
	
	while ( n < 50 )
	{
		printf("%d\n" , n);
		n = n + 2;
	}
	
	
	return 0;
}

