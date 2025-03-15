/* 141. Escreva um programa que leia três números inteiros positivos e calcule o MMC dos
 números lidos*/
 
#include<stdio.h>
#include<conio.h>

void main(){
	int num1, num2, num3;
	printf("Informe tres numeros inteiros:");
	scanf("%d%d%d", &num1, &num2, &num3);
	int divisor = 2;
	int mmc = 1;
	while(num1!=1 || num2!=1 || num3!=1){
		int ehdivisivel = 0;
		if(num1%divisor==0){
			num1 = num1 / divisor;
			ehdivisivel = 1;
		}
		if(num2%divisor==0){
			num2 = num2 / divisor;
			ehdivisivel = 1;
		}
		if(num3%divisor==0){
			num3 = num3 / divisor;
			ehdivisivel = 1;
		}
		if(ehdivisivel==1){
			mmc = mmc * divisor;
		}
		else{
			divisor++;
		}
	}
	printf("O MCC dos numeros informados eh: %d", mmc);
	getch();
}
