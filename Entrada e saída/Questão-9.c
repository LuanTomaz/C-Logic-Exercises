/*9. Escreva um programa que leia o valor de uma distância percorrida em km e o tempo
gasto em horas e calcule a velocidade média em m/s*/

#include<stdio.h>

void main(){
	float distancia, tempo;
	printf("Informe a distancia percorrida em km:\n");
	scanf("%f", &distancia);
	printf("Informe o tempo gasto em horas:\n");
	scanf("%f", &tempo);
	float velocidade_media = (distancia * 1000) / (tempo * 3600);
	printf("A velocidade media eh:%.2f m/s", velocidade_media);
	getch();
}
