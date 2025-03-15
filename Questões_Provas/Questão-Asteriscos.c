/*Questão dos asteriscos*/

#include<stdio.h>

void main(){
	int k, i, num;
	printf("Informe um numero inteiro:");
	scanf("%d", &num);
	for(k=1; k<=num; k++){       
		for(i=num; i>=k; i--){ 
			printf("*");               
		}                             
		printf("\n");                  
	}
	getch();
}

/*void main(){
	int k, num, i;
	printf("Informe um numero inteiro:");
	scanf("%d", &num);
	for(k=1; k<=num; k++){
		for(i=1; i<=k; i++){
			printf("*");
		}
		printf("\n");
	}
	getch();
}*/
