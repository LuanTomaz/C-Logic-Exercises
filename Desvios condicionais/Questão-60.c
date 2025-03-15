/* 60. Escreva um programa que leia o número de pessoas que vão participar de um
 churrasco e calcule quantos quilos de carne devem ser comprados. Para isso,
 considere que cada pessoa consome 250 g de carne.*/
 
#include<stdio.h>
#include<conio.h>

const float grama_pessoa = 250.0;

void main(){
	int num_pessoas;
	
	printf("Informe o numero de pessoas que irao ao churrasco:");
	scanf("%d", &num_pessoas);
	//conversao de gramas para kilos
	float quant_gramas = num_pessoas * grama_pessoa;
	float kilos = quant_gramas / 1000;
	printf("Sera necessario %.1fkg de carne", kilos);
	getch();
}
