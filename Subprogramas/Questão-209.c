/* 209. Escreva um programa que leia os valores de dois �ngulos internos de um tri�ngulo e
 calcule o valor do terceiro �ngulo. O c�lculo deve ser realizado atrav�s de um
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
