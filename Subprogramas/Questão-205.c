/* 205. Escreva um programa que leia o valor de uma distância percorrida em km e o tempo
 gasto em horas e calcule a velocidade média em m/s. A conversão deve ser realizada
 através de um subprograma.*/
 
#include<stdio.h>

float convertKM(float distancia){
	return distancia * 1000;
}

float convertHoras(float tempo){
	return tempo * 3600;
}

void main(){
	float distancia, tempo;
	printf("Informe a distancia em KM:");
	scanf("%f", &distancia);
	printf("Informe a tempo em HORAS:");
	scanf("%f", &tempo);
	float distMetros = convertKM(distancia);
	float tempoSeg = convertHoras(tempo);
	if(tempoSeg!=0){
		float velocidadeMedia = distMetros / tempoSeg;
		printf("A velocidade media eh: %.2f m/s", velocidadeMedia);
	}
	else{
		printf("O tempo nao pode ser 0!");
	}
}
