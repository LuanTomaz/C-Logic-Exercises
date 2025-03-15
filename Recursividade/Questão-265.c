/*265. Escreva um subprograma recursivo que receba como entrada um n�mero inteiro N
 positivo e calcule o en�simo termo da s�rie de Fibonacci.*/
 
#include<stdio.h>

int fibonacci(int n){
	if(n==1 || n==2){
		return 1;
	}
	return fibonacci(n-1) + fibonacci(n-2);
}

void main(){
	int n;
	printf("Informe um numero inteiro:");
	scanf("%d", &n);
	int valorFibonacci = fibonacci(n);
	printf("O enesimo termo da serie de Fibonacci eh: %d", valorFibonacci);
}
