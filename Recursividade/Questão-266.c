/* 266. Escreva um subprograma recursivo que receba como entrada um vetor de 10
 números inteiros e um número inteiro N entre 1 e 10 e calcule a soma de todos os
 elementos do vetor a partir da posição N.*/
 
#include<stdio.h>
const int TAMANHO = 10;

int somaVetor(int vet[TAMANHO], int n){
	if(n==TAMANHO-1){
		return vet[n];
	}
	return vet[n] + somaVetor(vet, n+1);
}

void main(){
	int k, n, vet[TAMANHO];
	for(k=0; k<TAMANHO; k++){
		printf("Informe um numero inteiro:");
		scanf("%d", &vet[k]);
	}
	printf("Informe a posicao a partir de qual voce quer somar:");
	scanf("%d", &n);
	int soma = somaVetor(vet, n-1);
	printf("\nVetor antes da soma:\n");
	for(k=0; k<TAMANHO; k++){
		printf("%d ", vet[k]);
	}
	printf("\nA soma eh: %d\n", soma);
}


