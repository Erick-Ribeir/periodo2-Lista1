/*Escreva um programa que leia ou gere um vetor de N elementos inteiros.A seguir,
crie uma função que receba esse vetor e conte quantos valores impares existem no vetor.
Retorne a quantidade de impares.
*/
#include <stdio.h>
#include "vetlib.h"

int main(){
	int vet[100], n, i,impar;
	
	printf("Digite a quantidade de elementos:");
	scanf("%d",&n);
	geraVet(vet,n);
	printf("Vetor:\n");
	printVet(vet,n);
	for(i=0;i<n;i++){
		if(n % 2!=0)
			printf("Quantidade de impares: %d",impar);
	}
	return 0;
	
}
