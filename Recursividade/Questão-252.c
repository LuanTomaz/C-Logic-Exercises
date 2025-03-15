/*252. Escreva um subprograma recursivo que receba como parâmetros de entrada dois
 números inteiros M e N e calcule a soma de todos os números do intervalo [M, N].*/
 
#include<stdio.h>

int somaIntervalo(int min, int max){
	if(min==max){
		return min;
	}
	if(max<min){
		return somaIntervalo(max, min); 
	}
	return min + somaIntervalo(min+1, max);
}

void main(){
	int m, n;
	printf("Informe os numeros do intervalo:");
	scanf("%d%d",&m,&n);
	int soma = somaIntervalo(m, n);
	printf("A soma dos numeros eh: %d", soma);
}


