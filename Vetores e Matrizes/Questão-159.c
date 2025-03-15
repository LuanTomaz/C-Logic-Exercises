/*159. Escreva um programa que leia um vetor de 10 n�meros inteiros e dois n�meros
 inteiros M e N entre 1 e 10 einverta os elementos que ocupam as posi��es M e N do
 vetor. O programa deve tamb�m imprimir o estado do vetor antes e ap�s a invers�o.*/
 
#include<stdio.h>

const int tamanho = 10;
void main(){
	int vet[tamanho];
	int k, m, n, aux;
	for(k=0; k<tamanho; k++){
		printf("Digite um numero inteiro:");
		scanf("%d", &vet[k]);
	}
	printf("Digite as posicoes a serem trocadas M e N:");
	scanf("%d%d", &m, &n);
	//Subtrai -1 de ambas as variaveis para nao dar erro na hora da impressao
	m--;
	n--;
	printf("Vetor antes da inversao:\n");
	for(k=0;k<tamanho; k++){
		printf("%d, ", vet[k]);
	}
	printf("\nVetor apos a inversao:\n");
	aux = vet[m];
	vet[m] = vet[n];
	vet[n] = aux;
	for(k=0; k<tamanho; k++){
		printf("%d, ", vet[k]);
	}
}
