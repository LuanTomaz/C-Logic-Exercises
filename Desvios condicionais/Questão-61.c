/*61. Escreva um programa que leia um n�mero inteiro e determine o seu valor absoluto. O
 valor absoluto deve ser calculado sem o uso de qualquer fun��o oferecida pela
 linguagem*/

#include<stdio.h>
#include<conio.h>

void main(){
	int numero;
	
	printf("Digite um numero inteiro:");
	scanf("%d", &numero);
	if(numero>0 || numero==0){
		printf("O valor absoluto eh:%d", numero);
	}
	else{
		printf("O valor absoluto eh:%d", numero*-1);
	}
	getch();
} 
