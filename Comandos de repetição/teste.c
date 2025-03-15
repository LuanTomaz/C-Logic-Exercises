//Escreva um programa que leia um número inteiro positivo m e informe o primeiro termo da série de Fibonacci maior do que m.

#include<stdio.h>

void main(){
	int proximo=0, ultimo=1, penultimo=1;
	int num;
	printf("DIgite um numero inteiro positivo:");
	scanf("%d", &num);
	while(ultimo<=num){
		proximo = ultimo + penultimo;
		penultimo = ultimo; 
		ultimo = proximo;
	}	
	printf("O primeiro termo da serie de Fibona maior que %d eh:%d", num, ultimo);
}


