/*
* Programa : Calcular el area de un cubo, mientras sus lados sean diferentes de 0
* Fecha : 22/08/18
* Autor: Heiner Colorado Castañeda	
*/

#include <iostream>
#include <stdio.h>
using namespace std;

int main() 
{
	
	float n, area;
	
	printf("Ingrese la medida de un lado: \n ");
	scanf("%f" , &n);
	
	
	while  (n!= 0 && n != 1 )
	{
		printf("Total del area %.2f\n es: %2f\n" , (n*n)*6);
		
		printf("\n Ingrese un numero real : ");
		scanf("%f" , &n);
	}
	return 0;
}

