/* 119. Escreva um programa que leia um n�mero inteiro N e imprima todos os termos da
 s�rie de Fibonacci que s�o menores ou iguais a N.*/
 
#include<stdio.h>
#include<conio.h>

void main(){
	int num;
	int proximo=1, ultimo=1, penultimo=0, k;
	printf("Informe um numero inteiro:");
	scanf("%d", &num);
	while(proximo<=num){
		printf("%d ", proximo);
		proximo = ultimo + penultimo;
		penultimo = ultimo;
		ultimo = proximo;
	}
	getch();
}






