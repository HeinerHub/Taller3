/*
* Programa: Calcular la mitad de un numero siempre y cuando el numero ingresado sea entre 0 y 1
* Fecha: 21-08-2018
* Autor: Heiner Colorado Castañeda
*/


#include <stdio.h>
using namespace std;

int main()
{
	float num ;
	
	printf("Ingrese un numero real \n ");
	scanf("%f" , &num);
	
	
	while  (num != 0 && num != 1 )
	{
		printf("la mitad de %.2f\n es: " , num, num / 2);
		printf("\n Introduzca otro numero real : ");
		scanf("%f" , &num);
	}
	return 0;
}

