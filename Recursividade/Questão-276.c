/* 276. Escreva um subprograma recursivo que receba como entrada um n�mero inteiro N
 n�o negativo e imprima a sa�da mostrada abaixo. O exemplo abaixo considera que N �
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
