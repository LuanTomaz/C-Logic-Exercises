/* 214. Em um determinado concurso p�blico, para cada quest�o que um candidato acerta ele
 ganha 5 pontos, para cada quest�o que ele erra ele perde 3 pontos e para cada
 quest�o que ele deixa em branco ele n�o ganha e nem perde pontos. Escreva um
 programa que leia o n�mero de quest�es que um candidato acertou, o n�mero de
 quest�es que ele errou e o n�mero de quest�es que ele deixou em branco e
 determine a sua pontua��o final. A pontua��o deve ser calculada atrav�s de um
 subprograma, que deve receber como entrada o n�mero de quest�es certas, o
 n�mero de quest�es erradas e o n�mero de quest�es em branco.*/
 
#include<stdio.h>

const int pontAcerto = 5;
const int pontErro = 3;
const int pontBranca = 0;

int calculaPontuacao(int acertos, int erros, int emBranco){
	return (acertos * pontAcerto) - (erros*pontErro) - (emBranco*pontBranca); 
}                      

void main(){
	int acertos, erros, emBranco;
	
	printf("Digite o numero de questoes certas:");
	scanf("%d", &acertos);
	
	printf("Digite o numero de questoes erradas:");
	scanf("%d", &erros);
	
	printf("Digite o numero de questoes em branco:");
	scanf("%d", &emBranco);
	
	int pontuacao = calculaPontuacao(acertos, erros, emBranco);
	
	printf("\n== Resultado ==\n");
	printf("Acertos: %d, ", acertos);
	printf("Erros: %d, ", erros);
	printf("Em branco: %d, ", emBranco);
	printf("\nA pontuacao final do candidato eh: %d", pontuacao);
}
