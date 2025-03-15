/*Escreva um programa que leia um vetor de 10 n�meros inteiros. Depois disso, o programa deve
pedir para que o usu�rio escolha duas posi��es entre 1 e 10. Ap�s a escolha o programa deve
permutar os valores dessas posi��es no vetor. A permuta��o deve ser feita por meio de um subprograma*/

#include<stdio.h>
const tamanho = 10;

void permutar(int vet[tamanho], int m, int n){
	int aux = vet[m];
	vet[m] = vet[n];
	vet[n] = aux;
}

void main(){
	int k, m, n, vet[tamanho];
	for(k=0; k<tamanho; k++){
		printf("Informe um numero inteiro:");
		scanf("%d", &vet[k]);
	}
	printf("Informe as posicoes que voce deseja trocar o valor (1 a 10):");
	scanf("%d%d", &m, &n);
	permutar(vet, m-1, n-1);
	for(k=0; k<tamanho; k++){
		printf("%d ", vet[k]);
	}
}
