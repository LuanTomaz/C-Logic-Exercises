/*Escreva um programa que leia dois n�meros inteiros positivos M e N e imprima todos os n�meros primos 
existentes dentro do intervalo [M, N]. O programa deve ter dois subprogramas: um para contar a quantidade de 
divisores exatos de um n�mero e o outro para verificar se um n�mero inteiro � primo ou n�o.*/

#include<stdio.h>

int numDivisores(int n){
	int k, cont = 0;
	for(k=1; k<=n; k++){
		if(n % k ==0){
			cont++;
		}
	}
	return cont;
}

int ehPrimo(int n){
	int divisores = numDivisores(n);
	if(divisores==2){
		return 1;
	}
	else{
		return 0;
	}
}

void main(){
	int m, n;
	int k;
	printf("Informe os limites do intervalo:\n");
	scanf("%d%d", &m, &n);
	printf("Os numeros primos do intervalo entre %d e &d sao:\n");
	for(k=m; k<=n; k++){
		int valor = ehPrimo(k);  
		if(valor==1){
			printf("%d ", k);
		}
	}
}
