/* 183. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e a
 seguir leia um número inteiro N entre 1 e 5 e calcule a soma de todos os elementos
 da linha N.*/
 
#include<stdio.h>

const int ordem = 5;
void main(){
	int mat[ordem][ordem];
	int i, j, n;
	for(i=0; i<ordem; i++){
		for(j=0; j<ordem; j++){
			printf("Informe um numero:");
			scanf("%d", &mat[i][j]);
		}
	}
	printf("Digite o numero N:\n");
	scanf("%d", &n);
	int soma = 0;
	for(j=0; j<ordem; j++){
		soma += mat[n-1][j];
	}
	printf("A soma dos elementos da linha eh: %d", soma);
}
