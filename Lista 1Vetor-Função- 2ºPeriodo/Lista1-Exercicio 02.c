/*Dado um vetor de n n�meros reais, crie uma fun��o que retorne
o maior elemento do vetor, apresente o vetor.*/

#include <stdio.h>
#include "vetlib.h"

int main(){
	int vet[100];
	int n;
	printf("Qtde de elementos do vetor:");
	scanf("%d",&n);
	geraVet(vet,n);
	printf("Vetor\n");
	printVet(vet,n);
	printf("Maior elemento:%d\n",maiorVet(vet,n));
	
	return 0;
}
