/* 21. Escreva um programa que leia o preço de produção de um determinado produto e a
 margem de lucro desejada pelo fabricante e calcule qual deve ser o seu preço de venda.
*/

#include<stdio.h>
#include<conio.h>

void main(){
	float custo_producao, margem_lucro;
	
	printf("Informe o preco de custo do produto:");
	scanf("%f", &custo_producao);
	printf("Informe a margem de lucro desejada:");
	scanf("%f", &margem_lucro);
	margem_lucro = margem_lucro / 100;
	float preco_venda = custo_producao / (1 - margem_lucro);
	printf("O preco de venda do produto deve ser:R$%.2f", preco_venda);
	getch();
}
