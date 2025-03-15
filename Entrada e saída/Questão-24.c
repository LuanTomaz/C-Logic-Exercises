/*24. Escreva um programa que leia o termo inicial e a razão de uma progressão aritmética e
 imprima os 5 primeiros termos desta progressão*/
 
#include<stdio.h>
#include<conio.h>

void main(){
	int termo_inicial, razao;
	
	printf("Digite o termo inicial:");
	scanf("%d", &termo_inicial);
	printf("Digite a razao:");
	scanf("%d", &razao);
	int termo1 = termo_inicial;
	int termo2 = termo_inicial + razao;
	int termo3 = termo_inicial + 2 * razao;
	int termo4 = termo_inicial + 3 * razao;
	int termo5 = termo_inicial + 4 * razao;
	printf("Primeiro termo:%d\n", termo1);
	printf("Segundo termo:%d\n", termo2);
	printf("Terceiro termo:%d\n", termo3);
	printf("Quarto termo:%d\n", termo4);
	printf("Quinto termo:%d", termo5);
	getch();
}
