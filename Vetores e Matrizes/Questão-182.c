/* 182. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
 determine o maior valor presente na diagonal principal.*/
 
#include<stdio.h>

const int ordem = 5;
void main(){
	int mat[ordem][ordem];
	int i, j, maior=0;
	for(i=0; i<ordem; i++){
		for(j=0; j<ordem; j++){
			printf("Digite um numero inteiro:");
			scanf("%d", &mat[i][j]);
		}
	}
	maior = mat[0][0];
	for(i=1; i<ordem; i++){
		if(mat[i][i]>maior){
			maior = mat[i][i];	
		}
	}
	printf("O maior valor na diagonal principal eh: %d", maior);
}
