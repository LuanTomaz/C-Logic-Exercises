/*204. Escreva um programa que leia o valor de cinco temperaturas em Celsius e, para cada
 valor lido, calcule o seu valor correspondente em Fahrenheit e em Kelvin. Os cálculos
 das conversões devem ser realizados através de subprogramas.*/
 
#include<stdio.h>

float kelvin(float celsius){
	return celsius + 273.15; 
}
float fahrenheit(float celsius){
	return (celsius * 9.0/5.0) + 32; 
}

void main(){
	float celsius;
	
	printf("Informe a temperatura em Celsius:");
	scanf("%f", &celsius);
	float ConvertKelvin = kelvin(celsius);
	float ConvertFahrenheit = fahrenheit(celsius);
	printf("Celsius:%.2f\nFahrenheit:%.2f\nKelvin:%.2f", celsius, ConvertFahrenheit, ConvertKelvin);
}
