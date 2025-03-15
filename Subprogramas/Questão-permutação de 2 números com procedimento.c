/*Escreva um programa que leia dois n�meros inteiros e os armazene em duas vari�veis M e N.
Depois disso, o programa deve usar um subprograma para permutar os valores dessas vari�veis.
Para verificar se a permuta��o foi realizada com sucesso, o programa deve imprimir os valores
das vari�veis antes e ap�s a permuta.*/


#include<stdio.h>

void permutarPorReferencia(int *a, int *b){
	int aux = *a;
	*a = *b;
	*b = aux;
}

void main(){
	int m, n;
	printf("Informe dois numeros inteiros distintos:\n");
	scanf("%d%d", &m, &n);
	printf("O valor de m eh %d e o valor de n eh %d\n", m, n);
	permutarPorReferencia(&m, &n);
	printf("O valor de m eh %d e o valor de n eh %d\n", m, n);
}
