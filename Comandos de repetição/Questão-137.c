/* 137. Escreva um programa que leia um n�mero inteiro positivo e calcule o n�mero de
 algarismos deste n�mero*/
 
#include<stdio.h>

void main(){
	int n;
	printf("Informe um numero inteiro positivo:");
	scanf("%d", &n);
	int cont = 0;
	int resto = n;
	do{
		resto = resto / 10;
		cont++;
	}
	while(resto!=0);
	printf("O numero %d tem %d algarismos", n, cont);
}
