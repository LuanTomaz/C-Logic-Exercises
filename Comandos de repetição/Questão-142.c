/* 142. O Banco do Povo está realizando uma grande promoção em seus financiamentos. Ele
 financia qualquer valor em até 240 prestações. O valor da primeira prestação
 corresponde ao valor do empréstimo dividido pelo número de parcelas. Os valores
 das demais prestações correspondem ao valor da parcela anterior acrescido de uma
 taxa de juros de 7%. Escreva um programa que leia o valor a ser financiado por um
 cliente e o número de prestações desejadas e calcule: o valor de cada prestação, o
 valor total que o cliente vai pagar pelo empréstimo e a diferença entre o valor a ser
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
 
 
