/*11. Escreva um programa que leia um valor em real, a cota��o atual do d�lar e calcule o
valor informado pelo usu�rio em d�lares.
*/

#include<stdio.h>

void main(){
	float real, cotacao;
	
	printf("Digite um valor em real:\n");
	scanf("%f", &real);
	printf("Informe o valor da cotacao do dolar:\n");
	scanf("%f", &cotacao);
	float convertido = real * cotacao;
	printf("O valor convertido em dolar eh: %.2f", convertido);
	getch();
}
