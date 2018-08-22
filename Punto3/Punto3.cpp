/*
* Programa : Area del rectangulo
* Fecha : 19/08/18
* Autor: Heiner Colorado Castañeda	
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char *argv[]) {
	
	float area, base , h;
	
	printf ("ingrese la medida de la base: ");
	scanf ("%f" , &base);
	printf ("ingrese la medida de la altura: ");
	scanf ("%f" , &h);
	
	area = (base*h);
	
	printf (" el area del rectangulo es %.f" , area);
	return 0;
}

