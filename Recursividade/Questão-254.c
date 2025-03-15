/*254. Escreva um subprograma recursivo que receba como entrada dois números inteiros x
 e yecalcule o valor do produto de x por y.*/
 
#include<stdio.h>

int valorProduto(int x, int y){
	if(y==0){
		return 0;
	}
	if(y>0){
		return x + valorProduto(x, y-1);
	}
	return -valorProduto(x, -y);
}

void main(){
	int x, y;
	printf("Informe os numeros X e Y:");
	scanf("%d%d", &x, &y);
	int produto = valorProduto(x,y);
	printf("O produto dos numeros %d e %d eh: %d", x, y, produto);
}
