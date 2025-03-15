/*103. Escreva um programa que leia um número inteiro N e verifique se ele é um número
primo.*/

#include<stdio.h>
#include<conio.h>

void main(){
	int numero, cont=0, k;
	
	printf("Digite um numero inteiro:");
	scanf("%d", &numero);
	for(k=1; k<=numero; k++){
		if(numero%k==0){
			cont++;
		}
	}
	if(cont==2){
		printf("O numero informado eh primo");
	}
	else{
		printf("O numero informado nao eh primo");
	}
	getch();
}
