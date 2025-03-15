/*181. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e a
 seguir leia um número inteiro N entre 1 e 5 e imprima os N primeiros elementos da
 sua diagonal principal.*/
 
#include<stdio.h>

const int ordem = 5;
void main(){
	int mat[ordem][ordem];
	int i, j, n;
	for(i=0; i<ordem; i++){
		for(j=0; j<ordem; j++){
			printf("Digite um numero inteiro:");
			scanf("%d", &mat[i][j]);
		}
	}
	printf("Informe o numero N:");
	scanf("%d", &n);
	printf("%d primeiros numeros da diagonal principal:\n", n);
	for(i=0; i<n; i++){
		printf("%d ", mat[i][i]);
	}
	printf("\n");
}
