/* 210. Em uma determinada cidade, cada m2 de um terreno está avaliado em R$ 50,00.
 Escreva um programa que leia o comprimento e a largura de um terreno localizado
 nesta cidade e calcule o seu valor de mercado. O cálculo deve ser realizado através
 de um subprograma, que deve receber como entrada o comprimento e a largura do
 terreno*/
 
#include<stdio.h>

const float m2 = 50;

float valorMercado(float comprimento, float largura){
	float area = comprimento * largura;
	return area * m2;
}

void main(){
	float comprimento, largura;
	printf("Digite o comprimento do terreno:");
	scanf("%f", &comprimento);
	printf("Digite a largura do terreno:");
	scanf("%f", &largura);
	float calculaTerreno = valorMercado(comprimento, largura);
	printf("O valor do terreno eh:%.2fR$", calculaTerreno);
}
