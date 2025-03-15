/*Escreva um programa C que leia três números inteiros positivos e calcule o Mínimo 
Múltiplo Comum desses três números. O cálculo do MMC deve ser feito por meio de 
um subprograma recursivo.  Como dica, crie primeiro um subprograma que receba 
como parâmetros três números inteiros positivos e encontre o menor número maior 
ou igual a 2 que seja um divisor exato de pelo menos um desses três números.  */

#include <stdio.h>


int menorDivisor(int n1, int n2, int n3) {
    int fator = 2;
    while (n1 % fator != 0 && n2 % fator != 0 && n3 % fator != 0) {
        fator++;
    }
    return fator;
}

int mmc(int n1, int n2, int n3) {
    if (n1 == 1 && n2 == 1 && n3 == 1){
        return 1;
    }

    int divisor = menorDivisor(n1, n2, n3);

    if (n1 % divisor == 0) n1 /= divisor;
    if (n2 % divisor == 0) n2 /= divisor;
    if (n3 % divisor == 0) n3 /= divisor;

    return divisor * mmc(n1, n2, n3);
}

void main() {
    int n1, n2, n3;
    
    printf("Informe tres numeros: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    int resultado = mmc(n1, n2, n3);
    printf("O resultado do MMC: %d\n", resultado);
}

