/* 203. Escreva um programa que leia o valor da base e da altura de um triângulo e calcule a
 sua área, que deve ser calculada através de um subprograma.*/
 
#include<stdio.h>

int area(int base, int altura){
	return (base*altura) / 2;
}

void main(){
	int base, altura;
	printf("Digite o valor da base e da altura do triangulo:\n");
	scanf("%d%d", &base, &altura);
	int calcula_area = area(base, altura);
	printf("A area do triangulo eh: %d", calcula_area);	
}
