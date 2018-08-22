/*
* Programa: Area circunferencia de 5 radios
* Fecha: 21-08-2018
* Autor: Heiner Colorado Castañeda
*/


#include <stdio.h>

using namespace std;

int main () 
{
	
	float area, radio;
	int i;
	
	for(i = 1; i <= 5; i++)
	{
		printf("introduzca radio %d: " , i);
		scanf("%f" , &radio);
		
		area = 3.1416 * radio * radio;
		
		printf("\n El area de la circunferencia %d es: %.2f " , i, area);
	}
	
	return 0;
}

