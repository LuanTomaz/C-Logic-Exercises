/* 199. Escreva um programa que leia três números inteiros e calcule a sua média aritmética.
 Ocálculo da média deve ser realizado através de um subprograma.*/
 
#include<stdio.h>

float media(int a, int b, int c){
	return (a + b + c) / 3.0;
}
void main(){
	int num1, num2, num3;
	printf("Informe 3 numeros inteiros:");
	scanf("%d%d%d", &num1, &num2, &num3);
	float valMedia = media(num1, num2, num3);
	printf("A media dos numeros informados eh:%.2f\n", valMedia);
}
