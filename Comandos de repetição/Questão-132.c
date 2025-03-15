/* 132. Escreva um programa que leia um número inteiro N e imprima a figura abaixo, onde N
 é o número de elementos impressos na primeira linha. No exemplo abaixo, foi
 considerado que N=5.
 
*****
****
***
**
* 

*/

#include<stdio.h>
#include<conio.h>

void main(){
	int num, i, k;
	printf("Informe um numero inteiro:");
	scanf("%d", &num);
	for(k=1; k<=num; k++){
		for(i=num; i>=k; i--){
			printf("*");
		}
		printf("\n");
	}
}
