/*200. Escreva um programa que leia o valor do lado de um quadrado e calcule a sua �rea e o
 seu per�metro. O programa deve ter um subprograma para calcular a �rea e outro
 para calcular o per�metro.*/
 
#include<stdio.h>

float area(int lado){
	return lado * lado;
}
float perimetro(int lado){
	return lado * 4;
}

void main(){
	int lado;
	printf("Digite o valor do lado do quadrado:");
	scanf("%d", &lado);
	float calculaArea = area(lado);
	float calculaPerimetro = perimetro(lado);
	printf("A area do quadrado eh:%.2f\nO perimetro do quadrado eh:%.2f\n", calculaArea, calculaPerimetro);
}
