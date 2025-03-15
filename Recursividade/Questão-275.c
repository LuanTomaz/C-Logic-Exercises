/* 275. Escreva um subprograma recursivo que receba como entrada um número inteiro N
 não negativo e imprima a saída mostrada abaixo. O exemplo abaixo considera que N
 é igual a 5.
 
*
**
***
****
*****

*/

#include<stdio.h>

void estrelasCresc(int n){
	int k;
	if(n>1){
		estrelasCresc(n-1);
	}
	printf("\n");
	for(k=1; k<=n; k++){
		printf("*");
	}
}

void main(){
	int n;
	printf("Informe a quantidade de linhas:");
	scanf("%d", &n);
	estrelasCresc(n);
}
