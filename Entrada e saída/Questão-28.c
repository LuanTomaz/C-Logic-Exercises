/* 28. Uma loja oferece três formas de pagamento para os seus clientes. Caso a compra seja
 paga à vista, a loja oferece um desconto de 10%. Caso a compra seja paga em três
 parcelas no cartão de crédito, o cliente paga o preço original (sem descontos, mas sem
 juros) da compra. Caso a compra seja paga em dez parcelas no cartão de crédito, a loja
 acrescenta uma taxa de juros de 20% sobre o valor da compra. Todas as dez parcelas
 têm exatamente o mesmo valor. Com base nessas informações, escreva um programa
 que leia o valor da compra de um cliente e informe: o valor da compra se ela for paga à
 vista, o valor de cada parcela se a compra for paga no cartão e em três parcelas (por
 exemplo, 3 parcelas de R$ 50,00) e o valor de cada parcela se a compra for paga com o
 cartão de crédito e em dez parcelas.
*/

#include<stdio.h>
#include<conio.h>

const float desconto_avista = 0.10;
const float acrescimo_10x = 0.20;

void main(){
	float valor_compra;
	
	printf("Informe o valor da compra:");
	scanf("%f", &valor_compra);
	float avista = valor_compra - (valor_compra * desconto_avista);
	float parcela3x = valor_compra / 3;
	float parcela10x = (valor_compra + valor_compra * acrescimo_10x)/10;
	printf("Valor avista:%.2fR$\n", avista);
	printf("Valor da parcela dividido em 3x:%.2fR$\n", parcela3x);  
	printf("Valor da parcela dividido em 10x:%.2fR$\n", parcela10x);
	getch();
}


