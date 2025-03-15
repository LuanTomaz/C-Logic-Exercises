/* 107. Escreva um programa que leia dois números inteiros M e N e calcule a média
 aritmética dos números primos do intervalo [M, N]*/
 
#include<stdio.h>
#include<conio.h>

void main(){
	int m, n, k, i;
	int soma=0, quant_primos=0;
	
	printf("Informe o numero m:"); scanf("%d", &m);
	printf("Informe o numero n:"); scanf("%d", &n);
	for(k=m; k<=n; k++){
		int divisores=0;
		for(i=1; i<=k; i++){
			if(k%i==0){
				divisores++;
			}
		}
		if(divisores==2){
			soma = soma + k;
			quant_primos++;
		}
	}
	if(quant_primos>0){
		float media = (float)soma / quant_primos;
		printf("Numero de primos no intervalo:%d\n", quant_primos);
		printf("A media eh:%.1f\n", media);	
	}
	else{
		printf("Nao existem numeros primos no intervalo!\n");
	}
	getch();
}
