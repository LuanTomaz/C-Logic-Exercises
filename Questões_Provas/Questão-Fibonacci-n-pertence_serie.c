/* 122. Escreva um programa que leia um número inteiro N e verifique se ele pertence à série
 de Fibonacci.*/
 
#include<stdio.h>
#include<conio.h>

void main(){
	int ultimo=1, penultimo=1, proximo=0, n;
	printf("Informe um numero inteiro:");
	scanf("%d", &n);
	while(ultimo<n){
		proximo = ultimo + penultimo;
		penultimo = ultimo; 
		ultimo = proximo;	
	}
	if(ultimo==n){
		printf("O numero esta na serie!");
	}
	else{
		printf("O numero nao esta na serie!");
	}
	getch();
}
