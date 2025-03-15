/*4. Escreva um programa que leia o número inteiro positivo e calcule o seu dobro, o seu
triplo, o seu quadrado, o seu cubo e a sua raiz quadrada.*/

#include<stdio.h>
#include<math.h>

void main(){
	int num;
	printf("Informe um numero inteiro positivo:");
	scanf("%d", &num);
	int dobro = num * 2;
	int triplo = num * 3;
	int quadrado = num * num;
	int cubo = pow(num, 3);
	int raiz = sqrt(num);
	printf("Dobro:%d\nTriplo:%d\nQuadrado:%d\nCubo:%d\nRaiz:%d", dobro, triplo, quadrado, cubo, raiz);
	getch();	
}
