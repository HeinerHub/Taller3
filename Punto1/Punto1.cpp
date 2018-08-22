/*
* Programa: Area de un triangulo
* Fecha: 21-08-2018
* Autor: Heiner Colorado Castañeda
*/


#include <stdio.h>

using namespace std;

int main(int argc, char *argv[]) {
	
	float area, base , h;
	
	printf ("ingrese la medida de la base: ");
	scanf ("%f" , &base);
	printf ("ingrese la medida de la altura: ");
	scanf ("%f" , &h);
	
	area = (base*h)/2;
	
	printf (" el area del triangulo es %.f" , area);
	

	return 0;
}

