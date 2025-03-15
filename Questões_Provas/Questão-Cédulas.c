/*2. Escreva um programa em C que simule o funcionamento de um caixa 
eletr�nico. O programa deve ler o valor a ser sacado por cada cliente e 
informar quantas c�dulas de cada valor devem ser entregues ao mesmo. O 
programa deve sempre priorizar o uso de c�dulas maiores. Por exemplo, se o 
cliente deseja fazer um saque de R$ 100,00, o programa deve sugerir uma 
�nica c�dula de R$ 100,00 e n�o duas c�dulas de R$ 50,00. Voc� deve supor 
que o caixa tem apenas c�dulas de R$ 100,00, R$ 50,00, R$ 20,00 e R$ 10,00. 
Caso o usu�rio informe um valor que n�o possa ser sacado, o programa deve 
informar para o usu�rio que � imposs�vel efetuar o saque do valor escolhido. 
Para resolver o programa, voc� pode supor que o n�mero de c�dulas de cada 
valor � infinito. O processo de leitura deve ser encerrado quando o usu�rio 
informar o valor 0, que n�o dever� ser processado. Ao terminar o processo de 
leitura, o programa deve informar a soma de todos os saques realizados e 
quantidade de c�dulas entregues de cada tipo. Voc� pode supor que o usu�rio 
nunca vai informar um valor de saque negativo.*/

#include<stdio.h>
#include<conio.h>

void main(){
	int saque, cedula100=0, cedula50=0, cedula20=0, cedula10=0;
	int valor_total=0;
	do{ 
		printf("Digite o valor do saque:\n");
		scanf("%d", &saque);
		valor_total += saque;
		if(saque>=100){
			cedula100 = saque / 100;
			printf("Cedulas de 100: %d\n", cedula100);
		}
		if(saque>=50){
			cedula50 = saque % 100 / 50;
			printf("Cedulas de 50: %d\n", cedula50);
		}
		 if(saque>=20){
			cedula20 = saque % 100 % 50 / 20;
			printf("Cedulas de 20: %d\n", cedula20);
		}
		if(saque>=10){
			cedula10 = saque  % 100 % 50 % 20 / 10; 
			printf("Cedulas de 10: %d\n", cedula10);
		}
	}
	while(saque!=0);
	printf("Soma total dos saques: %dR$", valor_total);
	getch();
}
