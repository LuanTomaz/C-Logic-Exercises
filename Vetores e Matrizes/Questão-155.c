/* 155. Escreva um programa que leia dez n�meros inteiros e, ap�s finalizar a leitura, leia um
 n�mero inteiro N (entre 1 e 10) e imprima qual foi o en�simo n�mero digitado pelo
 usu�rio.*/
 
#include<stdio.h>
#include<conio.h>

const int tamanho = 10;

void main(){
	int vet[tamanho];
	int n, k;
	for(k=0; k<tamanho; k++){
		printf("Informe um numero inteiro:");
		scanf("%d", &vet[k]);
	}
	printf("Digite a posicao que deseja:");
	scanf("%d", &n);
	int cont = 0;
	if(n>=0 && n<tamanho){
		printf("O numero guardado na posicao %d eh %d", n, vet[n-1]);
	}
	else{
		printf("Posicao invalida! Insira um numero entre 0 e %d", tamanho-1);
	}
	getch();
}

