/*114. Escreva um programa que leia dois n�meros inteiros M e N e calcule o valor de MN. A
 potencia��o deve ser calculada atrav�s de um comando de repeti��o, sem a utiliza��o
 de qualquer fun��o oferecida pela linguagem de programa��o*/
 
#include<stdio.h>

void main(){
	int base, expoente, k, potenciacao=1;
	
	printf("Informe o valor da base e o valor do expoente:\n");
	scanf("%d%d", &base, &expoente);
	for(k=1; k<=expoente; k++){
		potenciacao *= base;
	}
	printf("O resultado da potenciacao eh:%d", potenciacao);
}

