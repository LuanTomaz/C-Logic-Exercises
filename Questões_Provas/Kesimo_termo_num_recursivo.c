/*Escreva um programa em C que leia um n�mero inteiro N e um n�mero inteiro positivo 
k e identifique o k-�simo algarismo do n�mero N (da direita para a esquerda). A 
verifica��o deve ser feita por meio de um subprograma recursivo, que deve receber 
como par�metros o n�mero inteiro N e a posi��o K a ser verificada. Caso o valor de k 
seja maior do que o n�mero de algarismos do n�mero N, a resposta deve ser 0.*/

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
