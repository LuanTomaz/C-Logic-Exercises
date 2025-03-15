/*117. Escreva um programa que leia 10 números inteiros e, para cada número lido, calcule o
 seu fatorial.*/
 
#include<stdio.h>
#include<conio.h>

void main(){
	int num, i, k, fatorial=1;
	for(k=0; k<10; k++){
		printf("Digite um numero:");
		scanf("%d", &num);
		fatorial = 1;
		for(i=num; i>=1; i--){
			fatorial = fatorial * i;
		}
		printf("O fatorial do numero %d eh:%d\n", num, fatorial);
	}
	getch();
}
