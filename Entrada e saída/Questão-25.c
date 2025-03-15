/* 25. Escreva um programa que leia um número inteiro N e imprima dos 10 primeiros
 elementos da sua tabuada. A saída do programa deve seguir o formato abaixo, que
 mostra os 5 primeiros elementos da tabuada do 2.*/
 
#include<stdio.h>
#include<conio.h>

void main(){
	int num;
	
	printf("Informe um numero inteiro:");
	scanf("%d", &num);
	printf("1 X %d = %d\n", num, num*1);
	printf("2 X %d = %d\n", num, num*2);
	printf("3 X %d = %d\n", num, num*3);
	printf("4 X %d = %d\n", num, num*4);
	printf("5 X %d = %d\n", num, num*5);
	getch();
}
