/*Escreva um programa que leia um vetor de 10 números inteiros. Depois disso, o programa deve
pedir para que o usuário escolha duas posições entre 1 e 10. Após a escolha o programa deve
permutar os valores dessas posições no vetor. A permutação deve ser feita por meio de um subprograma*/

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
