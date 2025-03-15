/* 146. Escreva um programa que leia dois números inteiros M e N e calcule os valores de M
 div N e M mod N. Os valores devem ser calculados sem o uso dos operadores div e
 mod*/
 
#include<stdio.h>
#include<conio.h>

void main(){
	int m, n;
	printf("Informe dois numeros:");
	scanf("%d%d", &n, &m);
	int dividendo = 0;
	while(n-m>0){
		n = n - m;
		dividendo++;
	}
	int resto = n;
	printf("Dividendo: %d, Resto: %d", dividendo, resto);
	getch();
}
