/*1.Escreva um programa que leia três números inteiros e calcule a sua média aritmética.*/

#include<stdio.h>

void main(){
	int num1, num2, num3;
	
	printf("Informe 3 numeros inteiros:\n");
	scanf("%d%d%d", &num1, &num2, &num3);
	float media_aritmetica = (num1+num2+num3)/3;
	printf("A media aritmetica dos numeros informados eh:%.1f", media_aritmetica);
	getch();
}


