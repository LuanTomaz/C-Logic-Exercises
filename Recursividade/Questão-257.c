/* 257. Escreva um subprograma recursivo que receba como entrada dois números inteiros
 correspondentes aos valores da base e do expoente e calcule o valor da potenciação.
 Você pode supor que o expoente é um valor não negativo e que o caso 00é tratado
no programa principal (ou seja, não precisa ser tratado dentro do subprograma)*/

#include<stdio.h>

int potenciacao(int base, int expoente){
	if(expoente==0 || base==1){
		return 1;
	}		
	if(expoente==1){
		return base;
	}
	if(base==0){
		return 0;
	}
	return base * potenciacao(base, expoente-1);
}

void main(){
	int base, expoente;
	printf("Informe o valor da bese e do expoente:");
	scanf("%d%d", &base, &expoente);
	if(base==0 && expoente==0){
		printf("Operacao indefinida");
	}
	else{
		int potencia = potenciacao(base, expoente);
		printf("O valor da potenciacao eh %d", potencia);	
	}
}


