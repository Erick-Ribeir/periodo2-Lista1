/*Leia um vetor DNA de caracteres para receber as letras A, T, C e G que representam as bases do DNA.
Este vetor será responsável por representar uma fita de um gene de limite de 50 bases.
Gere o vetor complementar ao vetor DNA e o apresente (Lembrando as bases complementares A=T C=G).
*/
#include <stdio.h>
#include <string.h>

int main(){
	char dna[50], complementar[50];
	int i, n;
	printf("Entre com a seq DNA:");
	gets(dna);
	strupr(dna);//caixa alta
	printf("%s\n",dna);	
	n = strlen(dna);
	for(i=0;i<n;i++){
		if(dna[i]=='A')
			complementar[i] = 'T';
		else if(dna[i] == 'T')
			complementar[i] = 'A';
		else if(dna[i] == 'G')
			complementar[i] ='C';
		else if(dna[i] == 'C')
			complementar[i] = 'G';
	}
	printf("Sequencia Principal: %s\n",dna);	
	printf("Sequencia Complmentar: %s\n",complementar);
	return 0;
}
	// gerar a fita complementar
	// percorrer a principal
	// if(dna[i] == 'A')
			// complementar = 'T';
