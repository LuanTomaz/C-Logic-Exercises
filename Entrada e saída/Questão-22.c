/* 22. Escreva um programa que leia dois n�meros inteiros a e b e determine o maior
 m�ltiplo de a que � menor ou igual a b. Por exemplo, o maior m�ltiplo de 3 menor ou
 igual a 50 � 48*/
 
 #include<stdio.h>
#include<conio.h>

void main(){
	int num_a, num_b;
	
	printf("Informe o numero a:");
	scanf("%d", &num_a);
	printf("Informe o numero b:");
	scanf("%d", &num_b);
	int maior_multiplo = (num_b / num_a) * num_a;
	printf("O maior numero multiplo de %d e menor ou igual a %d eh:%d", num_a, num_b, maior_multiplo);
	getch();
}
