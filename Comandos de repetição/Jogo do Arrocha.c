#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    srand(time(NULL));
    int recorde = 100;

    while (1) {  
    
        int resposta = (rand() % 100) + 1;
        int min = 1, max = 100, palpite, tentativas = 0;
        char jogarNovamente;

        do {
            printf("Informe um numero entre %d e %d:", min, max);
            scanf("%d", &palpite);
            tentativas++;

            if (palpite > resposta) {
                max = palpite - 1;
            } else if (palpite < resposta) {
                min = palpite + 1;
            }
        } while (palpite != resposta && max - min >= 2);

        if (palpite == resposta) {
            printf("Parabens! Voce acertou em %d tentativas.\n", tentativas);
            if (tentativas < recorde) {
                recorde = tentativas;
                printf("Novo recorde! Melhor pontuação: %d tentativas.\n", recorde);
            } else {
                printf("Recorde atual: %d tentativas.\n", recorde);
            }
        } else {
            printf("Voce perdeu! O numero era %d. Tentativas: %d.\n", resposta, tentativas);
        }

        printf("Deseja jogar novamente? (s/n): ");
        scanf(" %c", &jogarNovamente); 
        if (jogarNovamente != 's' && jogarNovamente != 'S') {
            printf("Obrigado por jogar! Ate a proxima.\n");
            break; 
        }
    }
}


