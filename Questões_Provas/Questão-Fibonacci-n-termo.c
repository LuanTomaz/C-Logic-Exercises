/*112. Escreva um programa que leia um número inteiro N e imprima o enésimo termo da
 série de Fibonacci. (1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...)*/
 
#include<stdio.h>

void main(){
	int ultimo=1, penultimo=1, proximo=0, n, k;
	printf("Informe um numero inteiro:");
	scanf("%d", &n);
	if(n==1 || n==2){
		printf("1\n");
	}
	for(k=3; k<=n; k++){
		proximo = ultimo + penultimo;
		penultimo = ultimo;
		ultimo = proximo;
	}
	printf("%d", ultimo);
}
