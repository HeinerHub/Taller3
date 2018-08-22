/*
* Programa : Solicite al usuario 3 numeros y determinar cual de ellos es el mayor
* Fecha : 19/08/18
* Autor: Heiner Colorado Castañeda	
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char *argv[]) {
	
	int n1, n2, n3, mayor=0;
	
	printf ("ingrese 3 numeros:\n");
	scanf ("%d" , &n1);
	scanf ("%d" , &n2);
	scanf ("%d" , &n3);
	
	if (n1>n2>n3)
	{
		mayor =n1;
	}
	else if (n2>n1>n3)
	{
		mayor = n2;
	}
	else if (n3>n1>n2)
			 {
		mayor = n3;
	}
	
	
	printf (" El numero mayor es %d" , mayor);
	
	return 0;
}

