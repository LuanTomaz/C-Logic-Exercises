/* 156. Escreva um programa que leia um vetor de 10 n�meros inteiros e, ap�s terminar a
 leitura, leia um n�mero inteiro N e imprima todos os elementos do vetor que s�o
 maiores que N.*/
 
#include<stdio.h>
#include<conio.h>

const int tamanho = 10;

void main(){
	int vet[tamanho];
	int n, k;
	for(k=0; k<tamanho; k++){
		printf("Digite um numero inteiro:");
		scanf("%d", &vet[k]);
	}	
	printf("Informe um numero inteiro:");
	scanf("%d", &n);
	for(k=0; k<tamanho; k++){
		if(vet[k]>n){
			printf("%d ", vet[k]);
		}
	}
	getch();
}

