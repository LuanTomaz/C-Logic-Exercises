/*O IFPB precisa de um programa para fazer a corre��o autom�tica do seu teste de 
sele��o. A prova � composta por dez quest�es objetivas, cuja resposta � uma 
letra (a, b, c, d ou e). Inicialmente, o programa deve ler o gabarito. Depois, o 
programa deve ler o cart�o de respostas de tr�s candidatos e verificar quantas 
quest�es cada um deles acertou. O programa deve ter pelo menos tr�s 
subprogramas: um para ler um vetor de caracteres, um subprograma para 
imprimir um vetor de caracteres e outro para comparar o cart�o de 
respostas com o gabarito para calcular o n�mero de acertos de um 
candidato. O programa deve imprimir o gabartito, o cart�o de respostas e o 
n�mero de acertos de cada candidato.*/

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
