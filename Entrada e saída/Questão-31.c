/* 31. Em um determinado concurso p�blico, para cada quest�o que um candidato acerta ele
 ganha 5 pontos, para cada quest�o que ele erra ele perde 3 pontos e para cada
 quest�o que ele deixa em branco ele n�o ganha e nem perde pontos. Escreva um
 programa que leia o n�mero de quest�es que um candidato acertou, o n�mero de
 quest�es que ele errou e o n�mero de quest�es que ele deixou em branco e
 determine a sua pontua��o final.*/
 
#include<stdio.h>
#include<conio.h>

const int pont_certas = 5, pont_erradas = -3, pont_brancas = 0;

void main(){
	int certas, erradas, brancas;
	
	printf("Digite o numero de questoes certas, erradas e brancas:\n");
	scanf("%d%d%d", &certas, &erradas, &brancas);
	int questoes_certas = certas * pont_certas; //5*5 = 25
	int questoes_erradas = erradas * pont_erradas; //2*-3 = -6 
	int questoes_brancas = brancas * pont_brancas; 
	int pontuacao = questoes_certas + questoes_erradas + questoes_brancas;
	printf("A pontuacao do candidato foi:%d", pontuacao);
	getch();
} 
