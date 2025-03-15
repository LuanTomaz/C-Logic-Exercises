/* 161. Escreva um programa que leia um vetor de vinte caracteres e verifique se o vetor é um palíndromo ou não.*/

#include<stdio.h>

const int tamanho = 4;
void main(){
	int k;
	int vet[tamanho];
	
	for(k=0; k<tamanho; k++){
		printf("Digite um numero:");
		scanf("%d", &vet[k]);
	}
	
	int inicio = 0;
	int fim = tamanho - 1;
	int cont = 0; 
	
	for(k=0; k<tamanho/2; k++){ 
		 if(vet[inicio] == vet[fim]){
		 	cont++;
		 }
		 fim = fim - 1; 
		inicio = inicio + 1;
	}
	if(cont == tamanho/2){
		printf("O vetor eh palindromo!\n");
	}
	else{
		printf("O vetor nao eh palindromo!\n");
	}
}

