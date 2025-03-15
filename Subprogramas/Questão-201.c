/* 201. Escreva um programa que leia o número inteiro positivo e calcule o seu dobro, o seu
 triplo, o seu quadrado, o seu cubo e a sua raiz quadrada. Cada uma das informações
 solicitadas deve ser calculada através de um subprograma.*/
 
#include<stdio.h>
#include<math.h>

int dobro(int n){
	return n * 2;
}
int cubo(int n){
	return n * n * n;
}
int quadrado(int n){
	return n * n;
} 
int raiz(int n){
	return sqrt(n);
}

void main(){
	int n;
	printf("Informe um numero inteiro:");
	scanf("%d", &n);
	int valDobro = dobro(n);
	int valCubo = cubo(n);
	int valQuadrado = quadrado(n);
	int valRaiz = raiz(n);
	printf("O dobro do numero eh:%d\n", valDobro);
	printf("O cubo do numero eh:%d\n", valCubo);
	printf("O quadrado do numero eh:%d\n", valQuadrado);
	printf("O raiz do numero eh:%d\n", valRaiz);
}
