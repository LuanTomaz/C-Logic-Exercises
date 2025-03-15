/* 177. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
 calcule a sua matriz transposta.*/
 
#include<stdio.h>

const int tamanho = 5;
void main(){
	int mat[tamanho][tamanho];
	int i, j;
	for(i=0; i<tamanho; i++){
		for(j=0; j<tamanho; j++){
			printf("Informe um numero inteiro:");
			scanf("%d", &mat[i][j]);
		}
	}
	printf("A matriz transposta:\n");
	for(i=0; i<tamanho; i++){
		for(j=0; j<tamanho; j++){
			printf("%d ", mat[j][i]);
		}
		printf("\n");
	}
}
