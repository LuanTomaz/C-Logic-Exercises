/*7. Escreva um programa que leia o valor da base e da altura de um tri�ngulo e calcule a q a
sua �rea.*/

#include<stdio.h>

void main(){
	int base, altura;
	
	printf("Digite a base e a altura do triangulo:\n");
	scanf("%d%d", &base, &altura);
	int area = (base * altura)/2;
	printf("Area do triangulo:%d", area);
	getch();
}
