/* 101. Escreva um programa que leia um número inteiro positivo N e imprima os N primeiros
números ímpares positivos.*/

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
		for(k=0; k<num; k++){
			printf("%d\n", k*2+1);
		}
	}
	getch();
}
