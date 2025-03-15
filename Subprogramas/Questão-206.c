/*206. Escreva um programa que leia o valor dos dois catetos de um triângulo retângulo e
 calcule o valor da hipotenusa. O cálculo deve ser realizado através de um
 subprograma.*/
 
#include<stdio.h>
#include<math.h>

float hipotenusa(float cateto1, float cateto2){
	return sqrt(cateto1 * cateto1 + cateto2 * cateto2);
}

void main(){
	float cateto1, cateto2;
	printf("Informe o valor do cateto 1:");
	scanf("%f", &cateto1);
	printf("Informe o valor do cateto 2:");
	scanf("%f", &cateto2);
	float calHipotenusa = hipotenusa(cateto1, cateto2);
	printf("O valor da hipotenusa eh: %.2f", calHipotenusa);
}
