/*20. Em uma determinada cidade, cada m2 de um terreno está avaliado em R$ 300,00.
 Escreva um programa que leia o comprimento e a largura de um terreno localizado
 nesta cidade e calcule o seu valor de mercado.*/
 
 #include<stdio.h>
#include<conio.h>

const float valor_terreno = 300;

void main(){
	float comprimento, largura;
	
	printf("Informe a largura do terreno em metros:");
	scanf("%f", &largura);
	printf("INforme o comprimento do terreno em metros:");
	scanf("%f", &comprimento);
	float area = largura * comprimento;
	float valor = area * valor_terreno;
	printf("O valor do terreno eh:R$%.2f", valor);
	getch();
}
