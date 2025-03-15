/* 179. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
 imprima todos os elementos que estão acima e abaixo da diagonal principal.*/
 
#include<stdio.h>

const int ordem = 5;
void main(){
	int mat[ordem][ordem];
	int i, j;
	for(i=0; i<ordem; i++){
		for(j=0; j<ordem; j++){
			printf("Digite um numero:");
			scanf("%d", &mat[i][j]);
		}
	}
	printf("Metade acima da principal:\n");
	for(i=0; i<ordem; i++){
		for(j=i+1; j<ordem; j++){
			printf("%d", &mat[i][j]);
		}
	}
	printf("Metade abaixo da principal:\n");
	for(i=0; i<ordem; i++){
		for(j=0; j<i; j++){
			printf("%d ", mat[i][j]);
		}
	}
	printf("\n");
}
