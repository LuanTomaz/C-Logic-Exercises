/*2. Escreva um programa que leia três números e seus respectivos pesos e calcule a sua
média ponderada.*/

#include<stdio.h>

void main(){
	float num1, num2, num3;
	float peso1, peso2, peso3;
	
	printf("Informe o primeiro numero:");
	scanf("%f", &num1);
	printf("Informe o peso:");
	scanf("%f", &peso1);
	printf("Informe o segundo numero:");
	scanf("%f", &num2);
	printf("Informe o peso:");
	scanf("%f", &peso2);
	printf("Informe o terceiro numero:");
	scanf("%f", &num3);
	printf("Informe o peso:");
	scanf("%f", &peso3);
	float soma_pesos = peso1 + peso2 + peso3;
	float media_ponderada = (num1*peso1+num2*peso2+num3*peso3)/soma_pesos;
	printf("A media ponderada dos numeros informados eh:%.2f", media_ponderada);
	getch();
}
