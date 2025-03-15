/* 147. Escreva um programa que imprima todos os palíndromos existentes no intervalo
 [1000, 9999]. Um número é palíndromo quando o seu valor lido da esquerda para a
 direita é idêntico ao valor lido da direita para a esquerda. Exemplos: 1001, 2002,
 1221, 8888.*/
 
#include<stdio.h>

void main(){
	int k, cont=0;
	for(k=1000; k<9999; k++){
		int milhar = k / 1000;
		int centena = k % 1000 / 100;
		int dezena = k % 1000 % 100 / 10;
		int unidade = k % 1000 % 100 % 10;
		if(milhar==unidade && dezena==centena){
			printf("%d ", k);
		}
	}
}
