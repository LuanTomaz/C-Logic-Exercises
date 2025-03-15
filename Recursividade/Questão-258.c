/* 258. Escreva um subprograma recursivo que receba como entrada um valor em decimal e
 imprima o seu valor correspondente em binário.*/

#include<stdio.h>
 
void convertBinario(int n){
	if(n>0){
		convertBinario(n/2);
		printf("%d", n%2);
	}
}

void main(){
	int num;
	printf("Informe um numero inteiro:");
	scanf("%d", &num);
	convertBinario(num);
}
