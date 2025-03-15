/*Escreva um programa que leia dois números inteiros M e N e calcule a soma de todos os números inteiros
distintos que existem dentro do intervalo [M, N]. O cálculo da soma deve ser realizado por meio de uma função.*/

#include<stdio.h>

int somaIntervalo(int menor, int maior){
	int k, soma = 0;
	for(k=menor; k<=maior; k++){
		soma += k;
	}
	return soma;
}

void main(){
	int m, n;
	printf("Informe os limites do intervalo:\n");
	scanf("%d%d", &m, &n);
	int soma = somaIntervalo(m, n);
	printf("A soma dos numeros do intervalo entre %d e %d eh:%d", m, n, soma);
}
