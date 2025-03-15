/*Escreva um programa em C que leia um número inteiro N e um número inteiro positivo 
k e identifique o k-ésimo algarismo do número N (da direita para a esquerda). A 
verificação deve ser feita por meio de um subprograma recursivo, que deve receber 
como parâmetros o número inteiro N e a posição K a ser verificada. Caso o valor de k 
seja maior do que o número de algarismos do número N, a resposta deve ser 0.*/

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
