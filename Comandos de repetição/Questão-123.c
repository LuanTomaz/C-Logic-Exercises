/* 123. Escreva um programa que leia dois números inteiros M e N e calcule os N primeiros
 números primos maiores ou iguais a M*/
 
#include<stdio.h>

void main(){
	int numero, quantidade, contador=0, divisores, cont_divisores;
	printf("Digite dois numero inteiros:");
	scanf("%d%d", &numero, &quantidade);
	while(contador!=quantidade){
		cont_divisores=0;
		for(divisores=1; divisores<=numero; divisores++){
			if(numero%divisores==0){
				cont_divisores++;
			}
		}
		if(cont_divisores==2){
			printf("%d ", numero);
			contador++;
		}
		numero++;
	}
}
