/* 109. Escreva um programa que leia dois números inteiros M e N e um número inteiro X e
 imprima todos os divisores exatos de X existentes no intervalo [M, N].*/
 
#include<stdio.h>
#include<conio.h>

void main(){
	int m, n, num, k;
	
	printf("Digite os limites do intervalo...\n");
	printf("Inicio do intervalo:");
	scanf("%d", &m);
	printf("Fim do intervalo:");
	scanf("%d", &n);
	printf("Informe um numero inteiro:");
	scanf("%d", &num);
	for(k=m; k<=n; k++){
		if(k!=0 && num%k==0){
			printf("%d ", k);
		}
	}
	getch();
} 
