/*167. Escreva um programa que leia um vetor de dez números inteiros e ordene o vetor lido
 em ordem crescente*/
 
#include<stdio.h>

const int tamanho = 10;
void main(){
	int vet[tamanho];
	int i, j, temp;
	printf("Informe os numeros do vetor:\n");
	for(i=0; i<tamanho; i++){
		printf("Digite um numero inteiro:");
		scanf("%d", &vet[i]);
	}
	//Ordenando o vetor:
	for(i=0; i<tamanho-1; i++){
		for(j=0; j<tamanho -i-1; j++){
			if(vet[j]>vet[j+1]){
				temp = vet[j];
				vet[j] = vet[j+1];
				vet[j+1] = temp;
			}
		}
	}
	//Exibição do vetor após ser ordenado:
	printf("Vetor ordenado em ordem crescente:\n"); 
	for(i=0; i<tamanho; i++){
		printf("%d", vet[i]);
	}
	printf("\n");
}

