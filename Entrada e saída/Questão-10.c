/*10. Escreva um programa que leia o valor dos dois catetos de um triângulo retângulo e
calcule o valor da hipotenusa.*/

#include<stdio.h>
#include<math.h>

void main(){
	int cateto1, cateto2;
	
	printf("Informe o valor dos dois catetos:\n");
	scanf("%d%d", &cateto1, &cateto2);
	float soma_catetos = (cateto1 * cateto1) + (cateto2 * cateto2);
	float hipotenusa =  sqrt(soma_catetos);
	printf("A hipotenusa eh:%.2f", hipotenusa);
	getch();
}
