/*
* Programa: Sumar los primeros numeros primos del 1 al 50
* Fecha: 21-08-2018
* Autor: Heiner Colorado Castañeda
*/
#include <stdio.h>
using namespace std;

int main() 
{
	int suma=0, div=1, cont, n=1;
	
	
	while(n<=50)
	{
	while(div<=n)
	{
		if (n%div==0)
		{
			cont++;
		}
		  div++;
	}
		if(cont==2)
	{
		suma = suma + n;
	
	}
	 n++;
	 cont =0;
	 div = 0;
	}
	printf ("Ls suma de los numeros primos (del 1 al 50) es: %d" , suma);
	
	return 0;
}

