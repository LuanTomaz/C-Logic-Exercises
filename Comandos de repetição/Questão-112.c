/* 112. Escreva um programa que leia um número inteiro N e imprima o enésimo termo da
 série de Fibonacci. (1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...).*/

#include<stdio.h>

void main(){
	int penultimo = 1, ultimo = 1, proximo = 0, num, k;
	
	printf("Informe um numero inteiro:");
	scanf("%d", &num);
	if(num==1 || num==2){
		printf("1\n");
	}
	else{
		for(k=3; k<=num; k++){
			proximo = penultimo + ultimo;
			penultimo = ultimo;
			ultimo = proximo;
		}
		printf("%d", ultimo);
	}
}
