/*111. Escreva um programa que leia o termo inicial e a razão de uma PA e um número
 inteiro positivo N e imprima os N primeiros termos da progressão*/
 
#include<stdio.h>
#include<conio.h>

void main(){
	int termo_inicial, razao, numero, k;
	
	printf("Digite o termo inicial e a razao da PA:");
	scanf("%d%d", &termo_inicial, &razao);
	printf("Informe um numero inteiro positivo:");
	scanf("%d", &numero);
	for(k=0; k<numero; k++){
		termo_inicial+=razao;
		printf("%d ", termo_inicial);
	}	
	getch();
} 
