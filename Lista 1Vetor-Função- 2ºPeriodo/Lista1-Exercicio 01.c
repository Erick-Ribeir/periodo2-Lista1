/*1. Escreva um programa que leia ou gere um vetor de N elementos inteiros
(N deve ser informado pelo usuário e o limite do vetor é 100) e passe o mesmo
como parâmetro para uma função que retorne a soma de seus elementos.*/
#include <stdio.h>
#include <stdlib.h>
#include "vetlib.h"

int main(){
	int num,vet[100], res,i;
	printf("Digite a quantidade dos elementos do vetor:");
	scanf("%d",&num);
	geraVet(vet,num);
	printf("Elementos do vetor :");
	printVet(vet,num);
	res = somaVet(vet,num);
	printf("Soma dos elementos: %d ",res);
	return 0;
}

