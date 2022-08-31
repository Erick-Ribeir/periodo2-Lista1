#include <stdio.h>
#include <stdlib.h>
#include "vetlib.h"

int main(){
	int vet[100], n, busca, res;
	
	printf("Digite a quantidade dos elementos do vetor:");
	scanf("%d",&n);
	geraVet(vet,n);
	printf("Vetor gerado:\n");
	printVet(vet,n);
	printf("Valor para busca:");
	scanf("%d",& busca);
	res= existe(busca, vet,n);
	printf("%d encontrado %d vez(es)\n", busca, res);
	return 0;
}
