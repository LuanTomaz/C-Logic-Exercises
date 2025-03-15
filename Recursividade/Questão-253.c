/*253. Escreva um subprograma recursivo que receba como entrada um n�mero inteiro N
positivo e provoque um salto de N linhas na tela do usu�rio.*/

#include<stdio.h>

void saltarLinhas(int n){
	if(n>=1){
		printf("\n");
		saltarLinhas(n-1);
	}	
}

void main(){
	int n;
	printf("Informe um numero inteiro positivo:");
	scanf("%d", &n);
	saltarLinhas(n);
}


