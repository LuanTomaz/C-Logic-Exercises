/* 208. Escreva um programa que leia o valor do seno de um ângulo e calcule o valor absoluto
 do seu cosseno. O cálculo deve ser realizado através de um subprograma*/
 
#include<stdio.h>
#include<math.h>

float absoluto(float seno){
	return sqrt(1 - (seno * seno));
}

void main(){
	float seno;
	printf("Informe o valor do seno de um angulo:");
	scanf("%f", &seno);
	float valorAbsoluto = absoluto(seno);
	printf("O valor absoluto do cosseno eh: %.1f", valorAbsoluto);
}
