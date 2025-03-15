/*216. Escreva um programa que leia o valor de uma distância em metros e calcule o seu
 valor correspondente em quilômetros, hectômetros, decâmetros, centímetros,
 decímetros e milímetros. O programa deve ter um subprograma para converter para
 cada unidade de medida.*/
 
#include<stdio.h>

float quilometros(float metros){
	return metros / 1000;
}

float hectometros(float metros){
	return metros / 100;
}

float decametros(float metros){
	return metros / 10;
}

float centimetros(float metros){
	return metros * 100;
}

float decimetros(float metros){
	return metros * 10;
}

float milimetros(float metros){
	return metros * 1000;
}

void main(){
	float metros;
	
	printf("Informe o valor em metros:");
	scanf("%f", &metros);
	
	printf("\nConversoes:\n");
    printf("Quilometros: %.3lf km\n", quilometros(metros));
    printf("Hectometros: %.3lf hm\n", hectometros(metros));
    printf("Decametros: %.3lf dam\n", decametros(metros));
    printf("Decimetros: %.3lf dm\n", decimetros(metros));
    printf("Centimetros: %.3lf cm\n", centimetros(metros));
    printf("Milimetros: %.3lf mm\n", milimetros(metros));
}
