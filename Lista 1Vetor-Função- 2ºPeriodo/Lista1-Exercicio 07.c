/*Escreva um programa que leia ou gere dois vetores de N posições e faça a multiplicação dos elementos de
mesmo índice, colocando o resultado em um terceiro vetor. Mostre o vetor resultante.
*/
#include <stdio.h>
#include "vetlib.h"

int main(){
	int n, vet[100],i,mult;
	
	printf("Digite a quantidade de elementos:");
	scanf("%d",&n);
	geraVet(vet,n);
	printf("Vetor:");
	printVet(vet,n);
	if(n==vet[i]){
		mult=vet[i]*vet[i];
		printf("Resultado: %d",mult);
	}
	return 0;
}
