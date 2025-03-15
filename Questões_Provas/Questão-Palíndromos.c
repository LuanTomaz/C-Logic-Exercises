/*1. Escreva um programa que imprima todos os palíndromos que existem no 
intervalo [1000,9000].*/

#include<stdio.h>
#include<conio.h>

void main(){
	int k;
	for(k=1000; k<=9000; k++){
		int milhar = k / 1000;
		int centena = k % 1000 / 100;
		int dezena = k % 1000 % 100 / 10;
		int unidade = k % 1000 % 100 % 10;
		if(milhar==unidade && dezena==centena){
			printf("%d ", k);
		}
	}
	getch();
}
