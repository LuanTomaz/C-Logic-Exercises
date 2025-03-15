/* 154. Escreva um programa que leia dez números inteiros e, após finalizar a leitura, imprima
 todos os números lidos na ordem inversa em que eles foram digitados.*/
 
#include<stdio.h>
#include<conio.h>

const int tamanho = 10;

void main(){
	int vet[tamanho];
	int k;
	for(k=0; k<tamanho; k++){
		printf("Informe um numero inteiro:");
		scanf("%d", &vet[k]);
	}	
	for(k=tamanho-1; k>=0; k--){
		printf("%d ", vet[k]);
	}
	getch();
}
