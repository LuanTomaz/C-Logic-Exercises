/* 121. Escreva um programa que leia o termo inicial e a razão de uma progressão aritmética e
 um número inteiro N e imprima todos os termos da progressão menores ou iguais a N
 (caso a razão seja positiva) ou todos os termos maiores ou iguais a N (caso a razão seja
 negativa)*/
 
#include<stdio.h>

void main(){
	int termo_inicial, termo, razao, num;
	printf("Informe o termo inicial da progressao:");
	scanf("%d", &termo_inicial);
	printf("Digite a razao da progressao:");
	scanf("%d", &razao);
	printf("Termos da progressao ate:");
	scanf("%d", &num);
	termo = termo_inicial;
	if(razao>=0){
		while(termo <= num){
		printf("%d ", termo);
		termo += razao;
    	}
	}
	else{
		while(termo >= num){
			printf("%d ", termo);
			termo += razao;
		}
	}
}
