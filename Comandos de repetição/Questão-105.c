/* 105. Escreva um programa que leia dois números inteiros M e N e calcule a soma de todos
 os números do intervalo [M, N].*/
 
#include<stdio.h>
#include<conio.h>

void main(){
	int m, n, k, soma=0;
	
	printf("Informe o inicio e o fim do intervalo:");
	scanf("%d%d", &m, &n);
	for(k=m; k<=n; k++){
		soma = soma+k;
	}
	printf("A soma de todos os numeros do intervalo eh:%d", soma);
	getch();
}
