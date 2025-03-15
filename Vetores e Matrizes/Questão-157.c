/*157. Escreva um programa que leia um vetor de 10 números inteiros e, após terminar a
 leitura, leia um número inteiro N e imprima todas as posições em que o número N
 aparece dentro do vetor.*/
 
#include<stdio.h>
#include<conio.h>

const int tamanho = 10;

void main(){
	int vet[tamanho];
	int n, k;
	for(k=0; k<tamanho; k++){
		printf("Informe um numero inteiro:");
		scanf("%d", &vet[k]);
	}	
	printf("Digite um numero:");
	scanf("%d", &n);
	int cont = 0;
	for(k=0; k<tamanho; k++){
		if(vet[k]==n){
			printf("Posicao %d\n", k+1);
			cont++;
		}
	}
	getch();
}
