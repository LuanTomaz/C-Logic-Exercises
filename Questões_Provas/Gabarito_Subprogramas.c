/*O IFPB precisa de um programa para fazer a correção automática do seu teste de 
seleção. A prova é composta por dez questões objetivas, cuja resposta é uma 
letra (a, b, c, d ou e). Inicialmente, o programa deve ler o gabarito. Depois, o 
programa deve ler o cartão de respostas de três candidatos e verificar quantas 
questões cada um deles acertou. O programa deve ter pelo menos três 
subprogramas: um para ler um vetor de caracteres, um subprograma para 
imprimir um vetor de caracteres e outro para comparar o cartão de 
respostas com o gabarito para calcular o número de acertos de um 
candidato. O programa deve imprimir o gabartito, o cartão de respostas e o 
número de acertos de cada candidato.*/

#include<stdio.h>
#include<string.h>

void lerVetor(char vet[10]){
	int k;
	for(k=0; k<10; k++){
		printf("Informe a alternativa da questao %d:", k+1);
		scanf(" %c", &vet[k]);
		getchar();
	}
}

void imprimirVetor(char vet[10]){
	int k;
	for(k=0; k<10; k++){
		printf(" %c,", vet[k]);
	}
	printf("\n");
}

int contarAcertos(char gabarito[10], char respostas[10]){
	int k;
	int acertos = 0;
	for(k=0; k<10; k++){
		if(respostas[k] == gabarito[k]){
			acertos++;
		}
	}
	return acertos;
}

void main(){
	char gabarito[10];
	char resposta[10];
	char nome[20];
	
	
	printf("Digite o gabarito da prova (10 letras entre a e e)\n");
	lerVetor(gabarito);

	printf("Informe o nome do candidato:\n");
	scanf("%49s", nome);
	getchar();
	printf("Digite as respostas do candidato:\n");
	lerVetor(resposta);
	printf("Impressao do gabarito:");
	imprimirVetor(gabarito);
	printf("Candidato: %s\n", nome);
	printf("Respostas do candidato:");
	imprimirVetor(resposta);
	int acertos = contarAcertos(gabarito, resposta);
	printf("Acertos:%d\n", acertos);
}
