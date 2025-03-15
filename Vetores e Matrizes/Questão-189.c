/*189. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e a
 seguir leia um número inteiro N entre 1 e 5 e verifique se a coluna N da matriz é nula.*/
 
#include<stdio.h>

const int ordem = 5;
void main(){
	int mat[ordem][ordem];
	int i, j, n;
	
	int colunaNula=1;
	
	for(i=0; i<ordem; i++){
		for(j=0; j<ordem; j++){
			printf("Informe um numer inteiro:");
			scanf("%d", &mat[i][j]);
		}
	}
	printf("Digite o numero da coluna:");
	scanf("%d", &n);
	
	for(i=0; i<ordem; i++){
		if(mat[i][n-1]!=0){
			colunaNula = 0;
			break;
		}
	}
	if(colunaNula){
		printf("A coluna %d eh nula!", n);
	}
	else{
		printf("A coluna %d nao eh nula!", n);
	}
}
