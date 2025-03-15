/*5. Escreva um programa que leia o valor do raio de uma circunferência e calcule a sua área
e o seu comprimento.*/

#include<stdio.h>

const float pi = 3.14;

void main(){
	int raio;
	
	printf("Informe o valor do raio de uma circunferencia:");
	scanf("%d", &raio);
	float area = (raio*raio) * pi;
	float comprimento = 2 * pi * raio;
	printf("Comprimeto:%.2f\nArea:%.2f", comprimento, area);
	getch();
}
