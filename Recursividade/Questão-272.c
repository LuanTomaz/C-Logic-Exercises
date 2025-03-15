/* 272. Escreva um subprograma recursivo que receba como entrada um n�mero inteiro n e
 um n�mero inteiro positivo k e identifique o k-�simo d�gito do n�mero n (da direita
 para a esquerda). Por exemplo, se n for 1957 e k for igual a 3, o resultado do
 subprograma deve ser o n�mero 9.*/
 
#include<stdio.h>

int encontrarK(int n, int k){
	if(k==1){ 
		return n%10;
	}
	if(k==0){
		return 0;
	}
	return encontrarK(n/10, k-1); 
}

void main(){
	int n, k;
	printf("Informe um numero inteiro:");
	scanf("%d", &n);
	printf("Digite o a posicao do numero que deseja descobrir:");
	scanf("%d", &k);
	int kesimoTermo = encontrarK(n, k);
	printf("O %d-esimo algarismo eh:%d\n", k, kesimoTermo);
}
