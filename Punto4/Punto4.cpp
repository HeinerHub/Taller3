/*
* Programa : Solicite al usuario un numero del 1 al 7 y diga el dia de la semana correspondiente
* Fecha : 19/08/18
* Autor: Heiner Colorado Castañeda	
*/

#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	int dia;
	
	printf("ingrese un numero del 1 al 7: ");
	scanf("%d" , &dia);
	
	
	if(dia==1)
	{
		printf("el dia de la semana es domingo");
	}
	else if(dia==2)
	{
		printf("el dia de la semana es lunes");
	}
	else if(dia==3)
	{
		printf("el dia de la semana es martes");
	}
	else if(dia==4)
	{
		printf("el dia de la semana es miercoles");
	}
	else if(dia==5)
	{
		printf("el dia de la semana es jueves");
	}
	else if(dia==6)
	{
		printf("el dia de la semana es viernes");
	}
	else if(dia==7)
	{
		printf("el dia de la semana es sabado");
	}
	else{printf("valor incorrecto");}
	

	return 0;
}

