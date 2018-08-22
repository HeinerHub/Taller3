/*
* Programa: Solicite al usuario 3 numeros y determinar cual de ellos es el menor
* Fecha: 21-08-2018
* Autor: Heiner Colorado Castañeda
*/


#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	int n1, n2, n3, menor=0;
	
	printf ("ingrese 3 numeros:\n");
	scanf ("%d" , &n1);
	scanf ("%d" , &n2);
	scanf ("%d" , &n3);
	
	if (n1>n2>n3)
	{
		menor =n1;
	}
	else if (n2>n1>n3)
	{
		menor = n2;
	}
	else if (n3>n1>n2)
	{
		menor = n3;
	}
	
	
	printf (" El numero menor es %d" , mayor);
	
	return 0;
}

