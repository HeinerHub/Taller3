/*
* Programa: tabla de multiplicar 
* Fecha: 21-08-2018
* Autor: Heiner Colorado Castañeda
*/


#include <stdio.h>
using namespace std;

int main()
{
	char c;
	int i , num;
	
	do
		{
		printf("Introduzca un numero entero: ");
		scanf("%d" , &num);
		printf("\nLa tabla de multiplicar del numero %d es: \n\n", num);
		
		for( i = 0 ; i <= 10 ; i++);
		{
			printf("%d * %d = %d\n", i, num , i * num);
		}
		
	    printf("\n Desea visualizar otra tabla de multiplicar (s\n)?: ");
		fflush (stdin);
		scanf("%c" , &c);
		printf("\n");
		
	} while(c != 'n');
	
	return 0;
}

