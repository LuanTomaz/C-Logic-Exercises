/* 212. Escreva um programa que leia o n�mero total de quest�es existentes em uma prova e
 o n�mero de quest�es que um candidato acertou e determine o seu percentual de
 acertos e o seu percentual de erros. O c�lculo deve ser realizado atrav�s de um
 subprograma.*/
 
#include<stdio.h>

int calculaAcertos(int acertos, int questoes){
	return (acertos/questoes) * 100;
}

int calculaErros(int acertos, int questoes){
	return ((questoes-acertos)/questoes) * 100;
}

void main(){
	int acertos, questoes;
	printf("Informe a quantidade de questoes:");
	scanf("%d", &questoes);
	printf("informe o numero de acertos:");
	scanf("%d", &acertos);
	int percentAcertos(acertos, questoes);
	int percentErros(acertos, questoes);
	printf("O candidato teve um percentual de %.1f acertos e %.1f erros", percentAcertos, percentErros);
}
