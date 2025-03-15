/*217. Escreva um programa que leia um número positivo entre 1 e 9999 e calcule o valor da
 unidade de milhar, da centena, da dezena e da unidade. O programa deve ter
 subprogramas para calcular cada informação solicitada.*/
 
#include<stdio.h>

int milhar(int n){
	return n / 1000;
}

int centena(int n){
	return (n % 1000) / 100;
}

int dezena(int n){
	return (n % 100) / 10;
}

int unidade(int n){
	return n % 10;
}

void main(){
	int n;
	
	printf("Informe um numero entre 1 e 9999:");
	scanf("%d", &n);
	if(n < 1 || n > 9999){
		printf("Numero invalido! Tente novamente...");
	}
	else{
		printf("Valor milhar: %d\n", milhar(n));
		printf("Valor centena: %d\n", centena(n));
		printf("Valor dezena: %d\n", dezena(n));
		printf("Valor unidade: %d\n", unidade(n));	
	}	
}
