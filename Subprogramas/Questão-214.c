/* 214. Em um determinado concurso público, para cada questão que um candidato acerta ele
 ganha 5 pontos, para cada questão que ele erra ele perde 3 pontos e para cada
 questão que ele deixa em branco ele não ganha e nem perde pontos. Escreva um
 programa que leia o número de questões que um candidato acertou, o número de
 questões que ele errou e o número de questões que ele deixou em branco e
 determine a sua pontuação final. A pontuação deve ser calculada através de um
 subprograma, que deve receber como entrada o número de questões certas, o
 número de questões erradas e o número de questões em branco.*/
 
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
