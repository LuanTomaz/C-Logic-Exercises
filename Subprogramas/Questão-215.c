/* 215. O carro de Jo�o consegue percorrer em m�dia 14 km consumindo 1 litro de
 combust�vel. Escreva um programa que leia o valor da dist�ncia que Jo�o vai
 percorrer durante uma viagem e o pre�o atual de um litro de combust�vel e calcule
 quanto ele dever� gastar com combust�vel durante a viagem. O c�lculo deve ser
 realizado atrav�s de um subprograma.*/
 
#include<stdio.h>

float custoTotal(float distancia, float consumo, float precoGasolina){
	float litrosNecessarios = distancia / consumo;
	return litrosNecessarios * precoGasolina;
}
 
void main(){
	float distancia, consumo, precoGasolina;
	
	printf("Digite a distancia a ser percorrida em KM:");
	scanf("%f", &distancia);
	
	printf("Digite o consumo do veiculo em Km/L:");
	scanf("%f", &consumo);
	
	printf("Digite o preco da gasolina:");
	scanf("%f", &precoGasolina);
	
	float custoViagem = custoTotal(distancia, consumo, precoGasolina);
	printf("Joao ira gastar %.2f reais para percorrer %.1f Km\n", custoViagem, distancia);
}
