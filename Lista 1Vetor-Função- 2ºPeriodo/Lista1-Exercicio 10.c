/*Tentando descobrir se um dado era viciado, um dono de cassino honesto o lan?ou N vezes. Dados os n
resultados dos lan?amentos que devem ser armazenados em um vetor, determinar o n?mero de ocorr?ncias
de cada face.
*/

#include <stdio.h>
#include "vetLib.h"

int main(){
	int j, i, n, vet[100], num, quantidade=0;
	printf("Quantidade de lancamentos: ");
	scanf("%d", &n);
	geraVet(vet, n);
	printVet(vet, n);
	for(i=0; i<n; i++){
		num=vet[i];
		for(j=0; j<n; j++)
			if(num== vet[j])
				quantidade++;
		printf("O numero %d apareceu %d vezes\n", vet[i], quantidade);
		quantidade=0;
	}
	return 0;
}
