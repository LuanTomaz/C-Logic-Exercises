/* 208. Escreva um programa que leia o valor do seno de um �ngulo e calcule o valor absoluto
 do seu cosseno. O c�lculo deve ser realizado atrav�s de um subprograma*/
 
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
