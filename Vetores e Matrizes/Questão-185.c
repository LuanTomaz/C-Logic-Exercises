/*185. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
 calcule o valor da soma dos elementos de cada uma de suas linhas.*/
 
#include<stdio.h>

const int ordem = 5;
void main(){
	int mat[ordem][ordem];
	int somalinha[ordem];
	int i, j;
	int soma=0;
	for(i=0; i<ordem; i++){
		for(j=0; j<ordem; j++){
			printf("Informe um numero:");
			scanf("%d", &mat[i][j]);
		}
	}
	for(i=0; i<ordem; i++){
		for(j=0; j<ordem; j++){
			somalinha[i] += mat[i][j];
		}
	}
	for(i=0; i<ordem; i++){
		printf("A soma dos elementos da linha %d eh: %.2f", i+1, somalinha[i]);
	}
}
