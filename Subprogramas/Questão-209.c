/* 209. Escreva um programa que leia os valores de dois ângulos internos de um triângulo e
 calcule o valor do terceiro ângulo. O cálculo deve ser realizado através de um
 subprograma.*/
 
#include<stdio.h>

float terceiro(float angulo1, float angulo2){
	return 180 - (angulo1 + angulo2);
}

void main(){
	float angulo1, angulo2;
	printf("Informe o valor do primeiro angulo:");
	scanf("%f", &angulo1);
	printf("Informe o valor do segundo angulo:");
	scanf("%f", &angulo2);
	float terceiroAngulo = terceiro(angulo1, angulo2);
	printf("O valor do terceiro angulo eh:%.1f", terceiroAngulo);
}
