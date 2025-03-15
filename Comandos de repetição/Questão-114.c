/*114. Escreva um programa que leia dois números inteiros M e N e calcule o valor de MN. A
 potenciação deve ser calculada através de um comando de repetição, sem a utilização
 de qualquer função oferecida pela linguagem de programação*/
 
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

