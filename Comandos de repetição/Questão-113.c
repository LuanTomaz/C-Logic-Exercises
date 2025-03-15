/* 113. Escreva um programa que leia dois números inteiros M e N e imprima todos os
 números primos existentes no intervalo [M, N].
*/

#include<stdio.h>

void main(){
	int m, n, k, i;
	
	printf("Digite os limites do intervalo:");
	scanf("%d%d", &m, &n);
	for(k=m; k<=n; k++){
		int cont = 0;
		for(i=1; i<=k; i++){
			if(k%i==0){
				cont++;
			}
		}
		if(cont==2){
			printf("%d ", k);
		}
	}
}
