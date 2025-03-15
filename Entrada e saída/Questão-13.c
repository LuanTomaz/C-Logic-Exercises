/*13. Escreva um programa que leia um valor em KB e calcule o seu valor correspondente
em bits, bytes, MB e GB.*/

#include<stdio.h>
#include<math.h>

void main(){
	float KB;
	
	printf("Informe um valor em KB:\n");
	scanf("%f", &KB);
	float bits = KB * 1.024 * 8;
	float bytes = KB * 1.024;
	float MB = KB / 1.024;
	float GB = KB / pow(1.024, 2);
	printf("bits:%.2f\nbytes:%.2f\nMB:%.2f\nGB:%.4f\n", bits, bytes, MB, GB);
	getch();
}
