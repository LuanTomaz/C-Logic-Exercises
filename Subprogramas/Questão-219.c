/* 219. Escreva um programa que leia o valor total que um cliente consumiu em um
 restaurante e determine o valor final da sua conta, considerando que o restaurante
 cobra uma taxa de serviço de 10 % e uma taxa de couvert artístico de R$ 10,00. A
conta deve ser calculada através de um subprograma.*/

#include<stdio.h>

const float taxaServico = 0.10;
const float taxaCouvert = 10.00;

float valorConta(float valorGasto){
	return valorGasto + (valorGasto * taxaServico) + taxaCouvert;
}

void main(){
	float valor;
	printf("Informe o valor total gasto pelo cliente:");
	scanf("%f", &valor);
	float total = valorConta(valor);
	printf("O valor total da conta incluindo taxas eh: R$%.2f", total);
}
