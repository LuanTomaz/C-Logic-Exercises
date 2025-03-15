/*3. Escreva um programa que leia três números inteiros positivos e calcule o 
mínimo múltiplo comum dos números informados.*/

/*#include<stdio.h>
#include<conio.h>

void main(){
	int num1, num2, num3, divisor=2, mmc=1;
	
    printf("Informe os tres numeros:\n");
    scanf("%d%d%d", &num1, &num2, &num3);
    
    while (num1 > 1 || num2 > 1 || num3 > 1) {
        int dividiu = 0; 
        
        if (num1 % divisor == 0) {
            num1 = num1 / divisor;
            dividiu = 1;
        }
        if (num2 % divisor == 0) {
            num2 = num2 / divisor;
            dividiu = 1;
        }
        if (num3 % divisor == 0) {
            num3 = num3 / divisor;
            dividiu = 1;
        }
        if (dividiu) {
            mmc = mmc * divisor; 
        } else {
            divisor++; 
        }
    }
    printf("O MMC dos valores informados eh: %d\n", mmc);
	getch();
}*/


#include <stdio.h>

int main(){
    printf("Digite tres numeros: ");
    
    int num1, num2, num3;
    scanf("%d%d%d", &num1, &num2, &num3);
    
    int divisor=2;
    int mmc=1;
    while(num1!=1 || num2!=1 || num3!=1){
        int ehDivisel=0;
        
        if(num1%divisor==0){
            num1 /= divisor;
            ehDivisel=1;
        }
        if(num2%divisor==0){
            num2 /= divisor;
            ehDivisel=1;
        }
        if(num3%divisor==0){
            num3 /= divisor;
            ehDivisel=1;
        }
        
        if(ehDivisel==1){
            mmc = mmc * divisor;
        }
        else{
            divisor++;
        }
    }
    
    printf("O mdc eh: %d\n", mmc);

    return 0;
}



