/* 166. Escreva um programa que leia dois vetores A e B de 5 n�meros inteiros e calcule um
 terceiro vetor que contenha todos os elementos do vetor A que n�o est�o presentes
 no vetor B. O terceiro vetor n�o dever� armazenar valores repetidos.*/

#include <stdio.h>

const int Tamanho = 5;
void main()
{
    int vetor1[Tamanho], vetor2[Tamanho], vetor3[Tamanho];
    int preenchidos = 0, posicao, repetido, posicao2vetor;
    
    printf("informe os valores do vetor 1: ");
    for (posicao = 0; posicao < Tamanho; posicao++){
        scanf("%d",&vetor1[posicao]);
    }
    
    printf("informe os valores do vetor 2: ");
    for (posicao = 0; posicao < Tamanho; posicao++){
        scanf("%d",&vetor2[posicao]);
    }
    
    for(posicao = 0; posicao < Tamanho; posicao++){
        repetido = 0;
        for(posicao2vetor = 0; posicao2vetor<Tamanho; posicao2vetor ++){
            if(vetor1[posicao] == vetor2[posicao2vetor]){
                repetido ++;
            }
        }
        if(repetido == 0){
            repetido = 0;
            for(posicao2vetor = 0; posicao2vetor< preenchidos; posicao2vetor++){
                if(vetor1[posicao] == vetor3[posicao2vetor]){
                    repetido++;
                }
            }
            if(repetido == 0){
                vetor3[preenchidos] = vetor1[posicao];
                preenchidos ++;
            }
        }
    }
    printf("vetor 3: ");
    for(posicao = 0; posicao < preenchidos; posicao ++){
        printf("%d ",vetor3[posicao]);
    }      
}
