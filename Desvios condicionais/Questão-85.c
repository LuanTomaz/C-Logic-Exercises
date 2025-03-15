/* 85. Escreva um programa que leia dois operandos inteiros e um operador (+,-, *, /) e
 aplique o operador lido aos dois operandos, na ordem em que os mesmos foram
 digitados*/

#include<stdio.h>


void main() {
    float operando1, operando2, resultado;
    char operador;
    printf("Informe os dois operandos: ");
    scanf("%f %f", &operando1, &operando2); 
    printf("Informe o operador: ");
    scanf(" %c", &operador);  
    switch (operador) {
        case '+':
            resultado = operando1 + operando2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '-':
            resultado = operando1 - operando2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '*':
            resultado = operando1 * operando2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '/':
            if (operando2 != 0) {
                resultado = operando1 / operando2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Nao existe divisao por zero!\n");
            }
            break;
        default:
            printf("Operador invalido!\n");
    }
}

