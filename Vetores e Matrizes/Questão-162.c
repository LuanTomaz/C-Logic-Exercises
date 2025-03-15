/* 162. Escreva um programa que leia um número inteiro entre 0 e 255 e calcule o seu valor
 correspondente em binário.*/
 
#include<stdio.h>

void main(){
	int num, k;
	int binario[8];
	
	printf("Informe um numero inteiro entre 0 e 255:");
	scanf("%d", &num);
	if(num>=0 && num<=255){
		for(k=7; k>=0; k--){
			binario[k] = num % 2;
			num = num / 2;		
		}
		printf("Representacao em binario:");
		for(k=0; k<8; k++){
			printf("%d", binario[k]);
		}
		printf("\n");
	}
	else{
		printf("Numero fora do intervalo!");
	}
}
