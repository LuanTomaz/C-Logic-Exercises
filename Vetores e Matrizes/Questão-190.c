/* 190. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
 verifique quantas linhas nulas existem na matriz.*/
 
#include<stdio.h>
 
const int ordem = 5;
void main(){
	int mat[ordem][ordem];
	int i, j, n;
	int cont=0;
	int linhaNula;
	
	for(i=0; i<ordem; i++){
		for(j=0; j<ordem; j++){
			printf("Informe um numero inteiro:");
			scanf("%d", &mat[i][j]);
		}
	}
	for(i=0; i<ordem; i++){
		linhaNula=1;
		for(j=0; j<ordem; j++){
			if(mat[i][j]!=0){
				linhaNula=0;
				break;
			}
		}
		if(linhaNula){
			cont++;
		}
	}
	printf("A matriz possui %d linhas nulas!", cont);
}
