/* 59. Escreva um programa que leia dois n�meros e determine se o segundo n�mero �
 menor, igual ou maior que o primeiro.*/
 
#include<stdio.h>
#include<conio.h>

void main(){
	int num1, num2;
	
	printf("Digite dois numeros inteiros:\n");
	scanf("%d%d", &num1, &num2);
	if(num1<num2){
		printf("O segundo numero eh maior que o primeiro");
	}
	else if(num1>num2){
		printf("O segundo numero eh menor que o primeiro");
	}
	else{
		printf("O segundo numero eh igual o primeiro");
	}
	getch();
}
