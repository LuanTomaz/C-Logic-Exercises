/*120. Escreva um programa que leia um n�mero inteiro positivo N e imprima a maior
 quantidade poss�vel de n�meros inteiros positivos de forma que a soma de todos os
 n�meros impressos seja menor ou igual a N.*/
 
#include<stdio.h>
#include<conio.h>

void main(){
	int n, soma=0, numero=1;
	printf("Digite um numero inteiro:");
	scanf("%d", &n);
	while(soma<=n){
		printf("%d ", numero);
		soma += numero;
		numero++;
	}
	getch();
}
