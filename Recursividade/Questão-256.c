/* 256. Escreva um subprograma recursivo que receba como entrada uma matriz quadrada
 de ordem 5 de números reais e um número inteiro N (entre 1 e 5) e imprima os N
 primeiros números da diagonal principal.*/
 
#include<stdio.h>

void imprimirDiagonal(float mat[5][5], int i, int n){
	if(i>=n) return;
	printf("%.2f", mat[i][i]);
	imprimirDiagonal(mat, i+1, n);
}

void main(){
	float mat[5][5];
	int i, j, n;
	printf("Digite os elemento da matriz:\n");
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			printf("Informe um numero:");
			scanf("%f", &mat[i][j]);
		}
	}
	printf("Digite um numero inteiro entre (1 e 5):");
	scanf("%d", &n);
	if(n>=1 && n<=5){
		imprimirDiagonal(mat, 0, n);
	}
}
