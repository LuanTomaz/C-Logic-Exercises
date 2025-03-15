/*171. Escreva um programa que leia dois vetores de 5 números reais cada e calcule o
 produto escalar destes vetores.*/
 
#include<stdio.h>

const int tamanho = 5;
void main(){
	int vet1[tamanho], vet2[tamanho];
	int i, produto_escalar=0;
	
	//Primeiro vetor:
	printf("Primeiro vetor:\n");
	for(i=0; i<tamanho; i++){
		printf("Digite um numero inteiro:");
		scanf("%d", &vet1[i]);
	}
	
	//Segundo vetor:
	printf("Segundo vetor:\n");
	for(i=0; i<tamanho; i++){
		printf("Digite um numero inteiro:");
		scanf("%d", &vet2[i]);
	}
	
	//Calculo do produto escalar:
	for(i=0; i<tamanho; i++){
		produto_escalar += vet1[i] * vet2[i];
	}
	
	//Exibição do resultado:
	printf("Produto escalar dos dois vetores: %d", produto_escalar);
}
