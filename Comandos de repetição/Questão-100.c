/* 100. Escreva um programa que leia um n�mero inteiro positivo N e imprima os N
 primeiros n�meros pares positivos.*/

#include<stdio.h>
#include<conio.h>

void main(){
	int num, k;
	
	printf("Informe um numero inteiro positivo:");
	scanf("%d", &num);
	if(num<=0){
		printf("Insira um numero positivo!");
	}
	else{
		for(k=1; k<=num; k++){
			printf("%d\n", k*2);
		}
	}
	getch();
} 
