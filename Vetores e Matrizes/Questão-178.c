/*178. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e imprima todos os elementos da sua diagonal principal.*/

#include<stdio.h>
const int ordem = 2;

void main(){
	int i, j;
	float mat[ordem][ordem];
	for(i=0; i<ordem; i++){
		for(j=0; j<ordem; j++){
			printf("Informe um numero real:");
			scanf("%f", &mat[i][j]);
		}
		printf("\n");
	}
	printf("Diagonal principal:\n");
	for(i=0; i<ordem; i++){
		printf("%.2f", mat[i][i]);
	}
	printf("\n");
} 
