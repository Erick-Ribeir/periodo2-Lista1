#include <stdio.h>
#include <string.h>

int main(){
	char mensagem[50];
	int i,tamanho;
	printf("Mensagem Codificada: ");
	gets(mensagem);
	tamanho= strlen(mensagem);
	printf("Mensagem Decodificada:");
	for(i=0;i<tamanho;i++){
		if(mensagem[i]!='p')
			printf("%c",mensagem[i]);
		else if(mensagem[i-1]=='p' && mensagem[i+1]=='p')	
			printf("%c",mensagem[i]);
	}//fim for
	return 0;
}
