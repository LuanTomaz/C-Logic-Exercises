/*29. Escreva um programa que leia o número total de questões existentes em uma prova e
 o número de questões que um candidato acertou e determine o seu percentual de
 acertos e o seu percentual de erros.*/
 
#include<stdio.h>
#include<conio.h>

void main(){
	int total_questoes, questoes_certas;
	
	printf("Informe o numero total de questoes existentes na prova:");
	scanf("%d", &total_questoes);
	printf("Informe o numero de questoes certas:");
	scanf("%d", &questoes_certas);
	float percentual_acertos = ((float)questoes_certas/total_questoes) * 100;
	float questoes_erradas = total_questoes - questoes_certas;
	float percentual_erradas = (questoes_erradas/total_questoes) * 100;
	printf("O percentual de questoes certas do candidato:%.1f\n", percentual_acertos);
	printf("O percentual de questoes erradas do candidato:%.1f\n", percentual_erradas);
	getch();
}
