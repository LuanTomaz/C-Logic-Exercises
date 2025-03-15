/* 27. Escreva um programa que leia o comprimento e a largura de uma cisterna e a
 quantidade de litros que o usuário deseja armazenar na mesma e determine quantos
 metros ele deve encher a cisterna para obter a quantidade de litros desejada.*/
 
#include<stdio.h>
#include<conio.h>

void main(){
	float comprimento, largura, litros;
	
	printf("Informe o comprimento e largura da cisterna:");
	scanf("%f%f", &comprimento, &largura);
	printf("Informe a quantidade de litros que deseja armazenar:");
	scanf("%f", &litros);
	float volume_metrosCub = litros / 1000;
	//(largura * comprimento) para calculo da area
	float altura = volume_metrosCub / (largura * comprimento);
	printf("A altura necessaria para armazenar %.2f litros eh:%.2f metros", litros, altura);
	getch();
}
