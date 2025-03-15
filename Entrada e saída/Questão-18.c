/* 18. Escreva um programa que leia o valor do seno de um ângulo e calcule o valor do seu
 cosseno.*/
 
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
	float seno, cosseno;
	
	printf("Digite o valor do seno:");
	scanf("%f", &seno);
	cosseno = sqrt(1 - pow(seno, 2));
	printf("Cosseno = %.0f", cosseno);
	getch();
}
