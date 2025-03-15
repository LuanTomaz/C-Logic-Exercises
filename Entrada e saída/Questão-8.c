/*8. Escreva um programa que leia o valor de uma temperatura em Celsius e calcule o seu
valor correspondente em Fahrenheit e em Kelvin.*/

#include<stdio.h>

void main(){
	int celsius;
	
	printf("Informe a temperatura en celsius:");
	scanf("%d", &celsius);
	float fahrenheit = (celsius * 1.8) + 32;
	float kelvin = celsius + 273.15;
	printf("Fahrenheit = %.1f\nKelvin = %.1f", fahrenheit, kelvin);
	getch();	
}
 
