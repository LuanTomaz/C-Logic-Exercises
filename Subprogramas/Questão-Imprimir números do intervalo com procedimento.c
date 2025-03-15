/*Escreva um programa que leia dois números inteiros M e N e imprima todos os números inteiros
distintos que existem no intevalo [M, N]. A impressão deve ser feita por meio de um sobprograma.*/

#include<stdio.h>

void imprimirNumeros(int min, int max){
	int k;
	for(k=min; k<=max; k++){
		printf("%d ", k);
	}
	printf("\n");
}

void main(){
	int m, n;
	printf("Informe os limites do intevalo:\n");
	scanf("%d%d", &m, &n);
	imprimirNumeros(m, n);
}
