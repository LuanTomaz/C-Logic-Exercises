/*110. Escreva um programa que leia um número natural N e calcule o seu fatorial.*/

#include<stdio.h>
#include<conio.h>

void main(){
	int num, k, fatorial=1;
	
	printf("Digite um numero:");
	scanf("%d", &num);
	for(k=num; k>=1; k--){
		fatorial = fatorial * k;
	}
	printf("O fatorial de %d eh:%d", num, fatorial);
	getch();
}
