/* 218. Escreva um programa que leia um valor em segundos e converta para a forma X horas
 Y minutos e Z segundos. Por exemplo, o valor 3670 equivale a 1 hora 1 minutos
 e 10 segundos. O programa deve ter: um subprograma para calcular o valor das
 horas, um subprograma para calcular o valor dos , um subprograma para calcular o
 valor dos segundos e um subprograma para imprimir o resultado final.*/
 
#include<stdio.h>

int calculaHoras(int segundos){
	return segundos / 3600;
}

int calculaMinutos(int segundos){
	return segundos % 3600 / 60;
}

int calculaSegundos(int segundos){
	return segundos % 60;
}

void imprimirResultado(int horas, int minutos, int segundos){
	printf("\n== Conversao de Tempo ==\n");
	printf("%d horas, %d minutos, %d segundos", horas, minutos, segundos);
}

void main(){
	int segundos;
	printf("Informe o valor em segundos:");
	scanf("%d", &segundos);
	
	int valorHoras = calculaHoras(segundos);
	int valorMinutos = calculaMinutos(segundos);
	int valorSegundos = calculaSegundos(segundos);
	
	imprimirResultado(valorHoras, valorMinutos, valorSegundos);
}
