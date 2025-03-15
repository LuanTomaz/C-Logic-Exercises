/*158. Escreva um programa que leia um vetor de 10 números inteiros e, após terminar a
 leitura, imprima todos os elementos do vetor que são maiores do que a média
 aritmética de todos os elementos do vetor*/
 
#include<stdio.h>

const int tamanho = 10;
void main(){
	int vet[tamanho];
	int k;
	int soma = 0, cont = 0;
	for(k=0; k<tamanho; k++){
		printf("Informe um numero inteiro:");
		scanf("%d", &vet[k]);	
		soma = soma + vet[k];
		cont++;
	}
	float media = soma / cont;
	printf("A media aritmetica de todos os elementos do vetor eh: %.2f", media);
}
