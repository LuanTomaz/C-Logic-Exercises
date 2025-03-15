/* 211. Escreva um programa que leia o valor do raio de uma esfera e determine o seu
 volume. O cálculo deve ser realizado através de um subprograma*/
 
#include<stdio.h>
#include<math.h>

const float pi = 3.1416;

float volume(float raio){
	return (pow(raio, 3) * pi * 1.3333);
}

void main(){
	float raio;
	printf("Digite o valor do raio da esfera:");
	scanf("%f", &raio);
	float calculaVolume = volume(raio);
	printf("O volume eh:%.1f", calculaVolume);
}
