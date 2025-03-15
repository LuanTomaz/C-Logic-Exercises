/*202. Escreva um programa que leia o valor do raio de uma circunferência e calcule a sua
 área e o seu comprimento. O programa deve fornecer um subprograma para calcular
 a área e outro para calcular o comprimento.*/
 
#include<stdio.h>
#include<math.h>

const float pi = 3.14;

float area(float raio){
		return pi * pow(raio,2);
}
float comprimento(float raio){
		return 2 * pi * raio;
}
	
void main(){
	float raio;
	printf("Informe o raio de uma circunferencia:");
	scanf("%f", &raio);
	float calcula_area = area(raio);	
	float calcula_comprimento = comprimento(raio);
	printf("Area:%.2f\nComprimento:%.2f", calcula_area, calcula_comprimento);
}
