/* 118. Escreva um programa que leia um número N e imprima os N primeiros números
 primos positivos.*/
 
#include<stdio.h>
#include<conio.h> 
 
void main(){
	int n, i, k=2, count=0;
	printf("Digite um numero:");
	scanf("%d", &n);
	while(count<n){
		int cont = 0;
		for(i=1; i<=k; i++){
			 if(k%i==0){
			 	cont++;
			 }
		}
		if(cont==2){
			printf("%d\n", k);
			count++;
		}
		k++; 
	} 
}  
