/*Escreve um programa que sorteio, aleatoriamente, N n�meros e armazene estes em um vetor.
Em seguida, o usu�rio digita um n�mero e seu programa em C deve acusar se o n�mero digitado
est� no vetor ou n�o. Se estiver, diga a posi��o que est�.
*/
#include <stdio.h>
#include "vetlib.h"

int main(){
	int n,num,i,vet[100],b,e=0;
	printf("Quantidade de elementos do vetor:");
	scanf("%d",&n);
	geraVet(vet,n);
	printf("Vetor \n");
	printVet(vet,n);
	//leia b
	for(i=0;i<n;i++){
		if(b==vet[i]){
			printf("Vetor na posicao %d", vet[i]);
		   e=1;
	}//fim if
	
}//fim for
	printf("posicao %d",b);
	return 0;
}

