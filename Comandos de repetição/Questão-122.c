/* 122. Escreva um programa que leia um n�mero inteiro N e verifique se ele pertence � s�rie
 de Fibonacci.*/
 
#include<stdio.h>

void main(){
	int proximo=0, ultimo=1, penultimo=1;
	int n;
	printf("Digite um numero inteiro:");
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
}     





