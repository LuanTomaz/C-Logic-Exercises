/*12. Escreva um programa que leia um valor em polegadas e o converta para centímetros,
considerando que uma polegada equivale a 2.54 cm.*/

#include<stdio.h>

const float polegada_cm = 2.54;

void main(){
	float polegada;
	
	printf("Digite o valor em polegadas:\n");
	scanf("%f", &polegada);
	float centimetros = polegada * polegada_cm;
	printf("O resultado eh: %.2fcm", centimetros);
	getch();
}
