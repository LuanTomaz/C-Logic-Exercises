/*Escreva um subprograma recursivo que receba como entrada um número inteiro e
 calcule a sua quantidade de algarismos.*/
 
#include<stdio.h>

int contarAlgarismos(int n){ 
	if(n<10 && n>-10){
		return 1;
	}
	return 1 + contarAlgarismos(n/10);	
}

void main(){
	int n;
	printf("Informe um numero inteiro:");
	scanf("%d", &n);
	int numAlgarismos = contarAlgarismos(n);
	printf("O numero informado possui %d algarismos", numAlgarismos);
}




