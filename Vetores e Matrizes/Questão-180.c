/* 180. Escreva um programa que leia uma matriz quadrada de ordem 5 de números inteiros e
 uminteiro N e verifique quantas vezes o número N aparece dentro da matriz.*/
 
#include<stdio.h>

const int ordem = 5;
void main(){
	int mat[ordem][ordem];
	int i, j, n;
	int cont=0;
	//Armazenando os valores na matriz:
	for(i=0; i<ordem; i++){
		for(j=0; j<ordem; j++){
			printf("Digite um numero:");
			scanf("%d", &mat[i][j]);
		}
	}
	//Recebendo o numero:
	printf("Informe o numero N:");
	scanf("%d", &n);
	
	//Checagem da quantidade:
	for(i=0; i<ordem; i++){
		for(j=0; j<ordem; j++){
			if(mat[i][j]==n){
				cont++;
			}
		}
	}
	printf("O numero %d aparece %d vezes na matriz!", n, cont);
}
