/*
*Hacer un algoritmo que permita calcular el promedio teniendo como datos 3
*calificaciones de un alumno y mostrar en pantalla si el estudiante está
*aprobado o no. La mínima aprobatoria es 70.
*/
#include<iostream>
#include<stdio.h>
using namespace std;


int main(){
	float a=0.0,b=0.0,c=0.0;
	printf("Introduzcla las tres calificaciones\n");
	printf("Introduzca la primera calificacion: ");
	scanf("%f",&a);
	printf("\nIntroduzca la segunda calificacion: ");
	scanf("%f",&b);
	printf("\nIntroduzca la tercera calificacion: ");
	scanf("%f",&c);
	float promedio;
	promedio=(a+b+c)/3.0;
	if((a<0||a>100)||(b<0||b>100)||(c<0||c>100)){
		printf("Introdujo una calificacion invalida");
		return 0;
	}
	if(promedio>=70){
		printf("\nEl alumno aprobo con: %.2f",promedio);
	}else{
		printf("\nEl alumno reprobo con: %.2f",promedio);
	}
	return 0;
	
}
