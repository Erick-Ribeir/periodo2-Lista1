/*1. Escreva um programa que leia ou gere um vetor de N elementos inteiros
(N deve ser informado pelo usu�rio e o limite do vetor � 100) e passe o mesmo
como par�metro para uma fun��o que retorne a soma de seus elementos.*/
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

