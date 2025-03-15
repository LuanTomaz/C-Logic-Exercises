/* 17. Escreva um programa que leia a área de uma casa e o valor cobrado por um arquiteto
 por cada metro quadrado de um projeto arquitetônico e calcule o custo final do
 projeto.*/
 
 #include<stdio.h>
 #include<conio.h>
 
 void main(){
 	float area, valor;
 	
 	printf("Informe a area da casa:");
 	scanf("%f", &area);
 	printf("Informe o valor de cada metro quadrado:");
 	scanf("%f", &valor);
 	float custo_final = area * valor;
 	printf("O custo final do projeto eh:%.2f", custo_final);
 	getch();
 }
