/* 58. Escreva um programa que leia um n�mero inteiro e verifique se ele � par ou �mpar.*/

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
