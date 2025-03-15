/*Escreva um programa em c que receba 5 numeros inteiros e calcule o fatorial de cada um deles.*/

#include<stdio.h>

const int quantidade = 5;

int fatorial(int n){
	int k;
	int fator = 1;
	for(k=n; k>=2; k--){
		fator = fator * k;
	}
	return fator;
}

void main(){
	int k, n;
	for(k=1; k<quantidade; k++){
		printf("Informe um numero inteiro:");
		scanf("%d", &n);
		int valor = fatorial(n);
		printf("O fatorial de %d eh:%d\n", n, valor);
	}
	
}
