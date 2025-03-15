/*207. Escreva um programa que leia um valor em polegadas e o converta para cent�metros,
 considerando que uma polegada equivale a 2.54 cm. A convers�o deve ser realizada
 atrav�s de um subprograma.*/
 
#include<stdio.h>

const float VALOR = 2.54; //Valor da constante para convers�o

float convertPolegada(float polegada){
	return polegada * VALOR;
}

void main(){
	float centimetros, polegada;
	printf("Informe o valor em polegadas:\n");
	scanf("%f", &polegada);
	float CalculaCentimetros = convertPolegada(polegada);
	printf("%.1f polegadas eh %.1f centimetros", polegada, CalculaCentimetros);
}
