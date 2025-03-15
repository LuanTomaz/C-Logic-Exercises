/* 31. Em um determinado concurso público, para cada questão que um candidato acerta ele
 ganha 5 pontos, para cada questão que ele erra ele perde 3 pontos e para cada
 questão que ele deixa em branco ele não ganha e nem perde pontos. Escreva um
 programa que leia o número de questões que um candidato acertou, o número de
 questões que ele errou e o número de questões que ele deixou em branco e
 determine a sua pontuação final.*/
 
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
