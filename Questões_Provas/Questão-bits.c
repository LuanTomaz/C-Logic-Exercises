/*O programa deve calcular o n�mero de d�gitos bin�rios (bits) necess�rios para representar um n�mero inteiro fornecido pelo usu�rio.*/

#include<stdio.h>
#include<conio.h>

const int base = 2;

void main(){
	int num;
	printf("Digite um numero inteiro:");
	scanf("%d", &num);
	int digitos=0;
	if(num==0){
		digitos=1;
	}	
	int n = num;
	while(n!=0){
		n = n / base;
		digitos++;
	}
	printf("A quantidade de bits em binario eh:%d", digitos);
	getch();
}
