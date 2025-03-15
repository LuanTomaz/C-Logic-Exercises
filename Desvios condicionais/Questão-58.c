/* 58. Escreva um programa que leia um número inteiro e verifique se ele é par ou ímpar.*/

#include<stdio.h>
#include<conio.h>

void main(){
	int numero;
	printf("Digite um numero:");
	scanf("%d", &numero);
	if(numero%2==0){
		printf("O numero eh par");
	}
	else{
		printf("O numero eh impar");
	}
	getch();
}
