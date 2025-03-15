/*Questão do Tabuleiro:*/

#include<stdio.h>

void main(){
	int quantCL;
	
	printf("Informe o numero de linhas e colunas do tabuleiro: (valor unico):");
	scanf("%d", &quantCL);
	
	int mat[quantCL][quantCL];
	int l, c, value = 1;
	
	printf("%d ", value);
	
	for(l=0; l<quantCL; l++){
		for(c=0; c<quantCL; c++){
			value *= 2;
			mat[l][c] = value;
		}
	}
	for(l=0; l<quantCL; l++){
		for(c=0; c<quantCL; c++){
			printf("%d ", mat[l][c]);
		}
		printf("\n");
	}
}
