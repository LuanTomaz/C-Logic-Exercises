/* 19. Escreva um programa que leia os valores de dois ângulos internos de um triângulo e
 calcule o valor do terceiro ângulo.*/
 
#include<stdio.h>
#include<conio.h>

void main(){
	float angulo1, angulo2;
	
	printf("Informe o valor dos dois angulos inteirnos:\n");
	scanf("%f%f", &angulo1, &angulo2);
	float angulo3 = 180 - (angulo1 + angulo2);
	printf("O terceiro angulo eh:%.1f", angulo3);
	getch();
}
