/* 104. Escreva um programa que leia um n�mero inteiro N e verifique se ele � um n�mero
 perfeito. Um n�mero � perfeito quando ele � igual � soma de todos os seus divisores
 exatos exceto ele mesmo. Por exemplo, o n�mero 6 (1+2+3) � um n�mero perfeito.*/
 
#include<stdio.h>
#include<conio.h>

void main(){
	int numero, k, soma=0;
	
	printf("Digite um numero inteiro:");
	scanf("%d", &numero);
	for(k=1; k<numero; k++){
		if(numero%k==0){
			soma = soma+k;
		}
	}
	if(soma==numero){
		printf("O numero %d eh perfeito!", numero);
	}
	else{
		printf("O numero %d nao eh perfeito!", numero);
	}
	getch();
}
