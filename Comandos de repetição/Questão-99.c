/* 99. Escreva um programa que imprima todos os números inteiros entre 1 e 100 em ordem
 descendente*/

#include<stdio.h>
#include<conio.h>

void main(){
	int k;
	
	for(k=100; k>=1; k--){
		printf("%d\n", k);
	}	
	getch();
}
