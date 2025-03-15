/* 102. Escreva um programa que leia um número inteiro N e imprima todos os seus divisores
exatos*/

#include<stdio.h>
#include<conio.h>

void main(){
	int num, k;
	
	printf("Digite um numero inteiro positivo:");
	scanf("%d", &num);
	for(k=1; k<=num; k++){
		if(num%k==0){
			printf("%d\n", k);
		}
	}
	getch();
}
