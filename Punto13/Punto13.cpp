/*
* Programa : calcular el promedio de notas 
* Fecha : 21/08/18
* Autor: Heiner Colorado Castañeda	
*/

#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) 
{
	
	float nota1, nota2, nota3, promedio;
	
	for(nota1 = 0, nota2 = 0, nota3 = 0 , promedio = 0)
	{
	printf("Ingrese la primera nota\n");
	scanf("f%" , &nota1);
	printf("Ingrese la segunda nota\n");
	scanf("f%" , &nota2);
	printf("Ingrese la tercera nota\n");
	scanf("f%" , &nota3);
	
	promedio = (nota1+nota2+nota3)/3;
	
	printf("el promedio de las 3 notas es %.2f \n" , promedio);
	
	}
	
	return 0;
}

