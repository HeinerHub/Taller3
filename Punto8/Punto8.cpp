/*
* Programa : Solicite al usuario un numero y determine si es par o impar
* Fecha : 19/08/18
* Autor: Heiner Colorado Castañeda	
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char *argv[]) {
	
	int n ;
	 
	printf ("Ingrese un numero: ");
	scanf("%d" , &n);
	
	if (n%2==0)
	{
		printf("%d es par" , n);
		
	}
    else 
		{
		printf ("%d NO es par" , n);
	}
	
	
	
	return 0;
}

