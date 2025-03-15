/*3. Escreva um programa que leia o valor do lado de um quadrado e calcule a sua área e o
seu perímetro.*/

#include<stdio.h>

void main(){
	float lado;
	
	printf("Informe o valor do lado do quadrado:\n");
	scanf("%f", &lado);
	float area = lado*lado;
	float perimetro = lado * 4;
	printf ("A area do quadrado eh %.2f e o Perimetro eh %.2f", area, perimetro);
	getch();
	
}
