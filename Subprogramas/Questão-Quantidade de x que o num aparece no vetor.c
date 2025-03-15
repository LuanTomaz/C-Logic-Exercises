/*Escreva um programa que leia um vetor de 5 números inteiros e, em seguida, leia um número inteiro N e 
verifique quantas vezes o número N aparece dentro do vetor. A contagem deve ser feita por meio de um subprograma.*/

#include<stdio.h>

const int tamanho = 5;

int frequencia(int vet[tamanho], int n){
	int k, cont = 0;
	for(k=0; k<tamanho; k++){
		if(vet[k]==n){
			cont++;
		}
	}
	return cont;
}

void main(){
	int vet[tamanho];
	int num, k;
	printf("Informe o vetor...\n");
	for(k=0; k<tamanho; k++){
		printf("Informe um numero:");
		scanf("%d", &vet[k]);
	}
	printf("Informe o numero a ser procurado:");
	scanf("%d", &num);
	int total = frequencia(vet, num);
	printf("O numero %d aparece %d vezes no vetor", num, total);
}
