/* 184. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e a
 seguir leia um número inteiro N entre 1 e 5 e calcule a média aritmética dos
 elementos da coluna N.*/
 
#include<stdio.h>

const int ordem = 5;
void main(){
	int mat[ordem][ordem];
	int i, j, n;
	int soma=0;
	for(i=0; i<ordem; i++){
		for(j=0; j<ordem; j++){
			printf("Informe um numero:");
			scanf("%d", &mat[i][j]);
		}
	}
	printf("Digite o numero N:\n");
	scanf("%d", &n);
	
	for(i=0; i<ordem; i++){
		soma += mat[i][n-1];
	}
	float media = soma / ordem;
	printf("A media aritmetica dos numeros da coluna %d eh: %.2f", n, media);
}
