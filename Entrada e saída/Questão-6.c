/*6. Escreva um programa que leia um número inteiro e informe o seu antecessor e o seu
sucessor.*/

#include<stdio.h>

void main(){
	int num;
	
	printf("Digite um numero inteiro:");
	scanf("%d", &num);
	int antecessor = num - 1;
	int sucessor = num + 1;	
	printf("Antecessor:%d\n", antecessor);
	printf("Sucessor:%d", sucessor);
	getch();
}
