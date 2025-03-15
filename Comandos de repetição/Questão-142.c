/* 142. O Banco do Povo est� realizando uma grande promo��o em seus financiamentos. Ele
 financia qualquer valor em at� 240 presta��es. O valor da primeira presta��o
 corresponde ao valor do empr�stimo dividido pelo n�mero de parcelas. Os valores
 das demais presta��es correspondem ao valor da parcela anterior acrescido de uma
 taxa de juros de 7%. Escreva um programa que leia o valor a ser financiado por um
 cliente e o n�mero de presta��es desejadas e calcule: o valor de cada presta��o, o
 valor total que o cliente vai pagar pelo empr�stimo e a diferen�a entre o valor a ser
 pago e ovalor financiado*/
 
#include<stdio.h>

const float juros=1.07;

void main(){
	int parcelas;
	int i;
	printf("Digite o numero de parcelas:");
	scanf("%d", &parcelas);
	printf("Informe o valor do produto:");
	float valor; scanf("%f", &valor);
	float novo_preco = 0;
	float prestacao = (float)valor / parcelas;
	for(i=1; i<=parcelas; i++){
		printf("%d prestacao: %.2f\n", i, prestacao);
		novo_preco += prestacao;
		
		prestacao *= juros;
	}	
	printf("Valor inicial: %.2f, Valor final: %.2f, Diferenca: %.2f\n", valor, novo_preco, novo_preco - valor);
} 
 
 
