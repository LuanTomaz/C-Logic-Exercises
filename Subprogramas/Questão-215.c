/* 215. O carro de João consegue percorrer em média 14 km consumindo 1 litro de
 combustível. Escreva um programa que leia o valor da distância que João vai
 percorrer durante uma viagem e o preço atual de um litro de combustível e calcule
 quanto ele deverá gastar com combustível durante a viagem. O cálculo deve ser
 realizado através de um subprograma.*/
 
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
