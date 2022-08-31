/*Dado um vetor de n números reais, crie uma função que retorne
o menor elemento do vetor, apresente o vetor.
*/

#include <stdio.h>
#include "vetlib.h"

int main(){
	int n, vet[100],menor;
	while(1){
	printf("\nDigite a quantidade de elementos:");
	scanf("%d",&n);
	geraVet(vet,n);
	printf("Vetor:\n");
	printVet(vet,n);
	menor=menorVet(vet,n);
	printf("O menor elemento: %d",menor);
	}
	return 0;
	
}
