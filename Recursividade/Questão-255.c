/* 255. Escreva um subprograma recursivo que receba como entrada o termo inicial e a razão
 de uma progressão aritmética e um número inteiro positivo N e calcule o enésimo
 termo da progressão.*/
 
#include<stdio.h>
 
int enesimoTermo(int termoInicial, int razao, int n){
	if(n==1){
		return termoInicial;
	}
	return razao + enesimoTermo(termoInicial, razao, n-1);
} 
 
void main(){
	int termoInicial, razao, n;
	printf("Informe o termo inicial da progressao e a razao:");
	scanf("%d%d", &termoInicial, &razao);
	printf("Informe um numero inteiro:");
	scanf("%d", &n);
	int calculaTermo = enesimoTermo(termoInicial, razao, n);
	printf("O enesimo termo da progressao eh: %d", calculaTermo);	
}


