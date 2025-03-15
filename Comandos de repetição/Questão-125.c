/*125. Escreva um programa que leia um número inteiro positivo N e imprima os N primeiros
 números perfeitos.*/
 
#include<stdio.h>

void main(){
	int n, num=2, k;
	printf("Informe um numero inteiro positivo:");
	scanf("%d", &n);
	int cont=0;
	while(cont<n){
		int soma=0;
		for(k=1; k<num; k++){
			if(num%k==0){
				soma += k;
			}
		}
		if(soma==num){
			printf("%d ", num);
			cont++;
		}
		num++;
	}
}
