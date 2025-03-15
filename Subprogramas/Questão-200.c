/*200. Escreva um programa que leia o valor do lado de um quadrado e calcule a sua área e o
 seu perímetro. O programa deve ter um subprograma para calcular a área e outro
 para calcular o perímetro.*/
 
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
