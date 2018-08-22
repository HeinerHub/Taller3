/*
* Programa: Los numeros multiplos de 4 entre 64 Y 4
* Fecha: 21-08-2018
* Autor: Heiner Colorado Castañeda
*/


#include <stdio.h>
using namespace std;

int main() 
{
	int num;
	
	for( num = 64 ; num >= 4 ; num += -4)
	{
		printf("%d\n" , num);
	}
	
	return 0;
}

