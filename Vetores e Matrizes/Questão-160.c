/*160. Escreva um programa que leia um vetor de 10 números inteiros e inverta todos os
 elementos do vetor. O programa deve ser resolvido com a utilização de apenas um
 vetor*/
 
#include<stdio.h>

const int tamanho = 10;
void main(){
	int vet[tamanho];
	int k, aux;
	for(k=0; k<tamanho; k++){
		printf("Digite um numero inteiro:");
		scanf("%d", &vet[k]);
	}
	for(k=0; k<tamanho/2; k++){
		aux = vet[k];
		vet[k] = vet[tamanho -1 -k];
		vet[tamanho -1 -k] = aux;
	}
	printf("Vetor com posicoes invertidas:\n");
	for(k=0; k<tamanho; k++){
		printf("%d ", vet[k]);
	}
}
