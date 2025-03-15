//Testes de questões


#include<stdio.h>
#include<conio.h>

void main(){
	int k, i, N;
    printf("Digite um numero inteiro: ");
    scanf("%d", &N);
    for(k = 0; k < N; k++){
        for(i = 1; i <= N; i++){
            if(i <= k){
                printf(" ");
            } 
			else{ 
                printf("*");
            }
        }
        printf("\n");
    }
    getch();
}


