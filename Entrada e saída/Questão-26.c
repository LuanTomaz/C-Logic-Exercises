/*26. Escreva um programa que leia o peso e a altura dos atletas das quatro duplas que vão
 participar de um torneio de vôlei de praia e calcule o peso e a altura média de cada
 dupla e o peso e aaltura média de todos os jogadores do torneio.*/
 
#include<stdio.h>
#include<conio.h>

void main() {
    float peso1, altura1, peso2, altura2;
    float peso_total = 0, altura_total = 0;

    // Leitura da equipe 1
    printf("Informe o peso e a altura do jogador 1 da equipe 1:\n");
    scanf("%f %f", &peso1, &altura1);
    printf("Informe o peso e a altura do jogador 2 da equipe 1:\n");
    scanf("%f %f", &peso2, &altura2);
    float altura_equipe1 = (altura1 + altura2) / 2;
    float peso_equipe1 = (peso1 + peso2) / 2;
    printf("Altura média da equipe 1: %.2f\n", altura_equipe1);
    printf("Peso médio da equipe 1: %.2f\n\n", peso_equipe1);
    peso_total += (peso1 + peso2);
    altura_total += (altura1 + altura2);

    // Leitura da equipe 2
    printf("Informe o peso e a altura do jogador 1 da equipe 2:\n");
    scanf("%f %f", &peso1, &altura1);
    printf("Informe o peso e a altura do jogador 2 da equipe 2:\n");
    scanf("%f %f", &peso2, &altura2);
    float altura_equipe2 = (altura1 + altura2) / 2;
    float peso_equipe2 = (peso1 + peso2) / 2;
    printf("Altura média da equipe 2: %.2f\n", altura_equipe2);
    printf("Peso médio da equipe 2: %.2f\n\n", peso_equipe2);
    peso_total += (peso1 + peso2);
    altura_total += (altura1 + altura2);

    // Leitura da equipe 3
    printf("Informe o peso e a altura do jogador 1 da equipe 3:\n");
    scanf("%f %f", &peso1, &altura1);
    printf("Informe o peso e a altura do jogador 2 da equipe 3:\n");
    scanf("%f %f", &peso2, &altura2);
    float altura_equipe3 = (altura1 + altura2) / 2;
    float peso_equipe3 = (peso1 + peso2) / 2;
    printf("Altura média da equipe 3: %.2f\n", altura_equipe3);
    printf("Peso médio da equipe 3: %.2f\n\n", peso_equipe3);
    peso_total += (peso1 + peso2);
    altura_total += (altura1 + altura2);

    // Leitura da equipe 4
    printf("Informe o peso e a altura do jogador 1 da equipe 4:\n");
    scanf("%f %f", &peso1, &altura1);
    printf("Informe o peso e a altura do jogador 2 da equipe 4:\n");
    scanf("%f %f", &peso2, &altura2);
    float altura_equipe4 = (altura1 + altura2) / 2;
    float peso_equipe4 = (peso1 + peso2) / 2;
    printf("Altura média da equipe 4: %.2f\n", altura_equipe4);
    printf("Peso médio da equipe 4: %.2f\n\n", peso_equipe4);
    peso_total += (peso1 + peso2);
    altura_total += (altura1 + altura2);

    // Exibição das médias gerais
    printf("Altura média de todos os jogadores: %.2f\n", altura_total / 8);
    printf("Peso médio de todos os jogadores: %.2f\n", peso_total / 8);
}

