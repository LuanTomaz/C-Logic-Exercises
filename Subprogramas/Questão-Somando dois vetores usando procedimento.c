/*Escreva um programa que leia dois vetores de 5 números inteiros cada e, após a leitura, gere
um terceiro vetor representando a soma dos dois vetores informados. No final, o programa deve
imprimir os três vetores*/

#include<stdio.h>

const int TAMANHO = 5;

void lerVetor(int vet[TAMANHO]){
	int k;
	for(k=0; k<TAMANHO; k++){
		scanf("%d", &vet[k]);
	}
}

void imprimirVetor(int vet[TAMANHO]){
	int k;
	for(k=0; k<TAMANHO; k++){
		printf("%d", vet[k]);
	}
}

void somarVetores(int vet1[TAMANHO], int vet2[TAMANHO], int vetSoma[TAMANHO]){
	int k;
	for(k=0; k<TAMANHO; k++){
		vetSoma[k] = vet1[k] + vet2[k];
	}
}

void main(){
	int k, vet1[TAMANHO], vet2[TAMANHO], vetSoma[TAMANHO];
	printf("Lendo o primeiro vetor:\n");
	lerVetor(vet1);
	printf("Lendo o segundo vetor:\n");
	lerVetor(vet2);
	somarVetores(vet1, vet2, vetSoma);
	printf("\nImprimindo o primeiro vetor:\n");
	imprimirVetor(vet1);
	printf("\nImprimindo o segundo vetor:\n");
	imprimirVetor(vet2);
	printf("\nImprimindo o vetor soma:\n");
	imprimirVetor(vetSoma);
}
