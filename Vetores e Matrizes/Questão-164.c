/* 164. Escreva um programa que leia dois vetores A e B de 5 números inteiros cada e calcule
 um terceiro vetor que contenha todos os elementos que estão presentes em pelo
 menos umdosvetores lidos. O terceiro vetor não deve armazenar valores repetidos.*/
 
#include<stdio.h>

const int tamanho = 5;
void main(){
	int vetA[tamanho], vetB[tamanho], vetC[tamanho*2];
	int k, i, repetido, preenchidos=0;
	
	//Vetor A
	printf("Vetor A\n");
	for(k=0; k<tamanho; k++){
		printf("Digite um numero:");
		scanf("%d", &vetA[k]);
	}
	
	//Vetor B
	printf("Vetor B\n");
	for(k=0; k<tamanho; k++){
		printf("Digite um numero:");
		scanf("%d", &vetB[k]);
	}
	
	int adicionados = 0;
	//Adicionando numeros do vetor A:
	for(k=0; k<tamanho; k++){
		int atual = vetA[k];
		int repetido = 0;
		
		for(i=0; i<adicionados; i++){
			if(vetC[i]==atual){
				repetido=1;
				break;
			}
		}
		if(repetido==0){
			vetC[adicionados] = atual;
			adicionados++;
		}
	}
	//Adicionando numeros do vetor B:
	for(k=0; k<tamanho; k++){
		int atual = vetB[k];
		repetido = 0;
		for(i=0; i<adicionados; i++){
			if(vetC[i]==atual){
				repetido = 1;
				break;
			}
		}
		if(repetido==0){
			vetC[adicionados] = atual;
			adicionados++;
		}
	}
	//Vetor C:
	printf("Vetor C:\n");
	for(k=0; k<adicionados; k++){
		printf("%d ", vetC[k]);
	}
}
