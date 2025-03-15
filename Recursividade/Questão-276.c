/* 276. Escreva um subprograma recursivo que receba como entrada um número inteiro N
 não negativo e imprima a saída mostrada abaixo. O exemplo abaixo considera que N é
 igual a 5.
 
*****
****
***
**
* 
 
*/

#include<stdio.h>

void estrelaCresc(int n){
	int k;
	printf("\n");
	for(k=1; k<=n; k++){
		printf("*");
	}
	if(n>1){
		estrelaCresc(n-1);
	}
}

void main(){
	int n;
	printf("Informe o numero de linhas:");
	scanf("%d", &n);
	estrelaCresc(n);
}
