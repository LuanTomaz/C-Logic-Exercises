/* 106. Escreva um programa que leia dois n�meros inteiros M e N e calcule a m�dia
 aritm�tica dos n�meros do intervalo [M, N].*/

#include<stdio.h>
#include<conio.h>

void main(){
	int m, n, k, soma=0, cont=0;
	
	printf("Informe o inicio e o fim do intervalo:");
	scanf("%d%d", &m, &n);
	for(k=m; k<=n; k++){
		soma = soma+k;
		cont++;
	}
	float media = soma/cont;
	printf("A media aritmetica eh:%.1f", media);
}
