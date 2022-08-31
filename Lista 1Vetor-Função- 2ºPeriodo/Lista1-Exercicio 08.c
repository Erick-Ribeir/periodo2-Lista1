/*Leia um vetor de caracteres (limite 100) utilizando a função gets(). Utilize a função strlen
(Você deve incluir a biblioteca string.h) para obter a quantidade de elementos do vetor de caracteres.
Escreva o vetor lido em ordem inversa.
*/

#include <stdio.h>
#include <string.h>

int main(){
   char p1[50],p2[50];
   int tamanho,i,j;
   printf("Entre com a palavra:");
   gets(p1);
   tamanho = strlen(p1);
   j = tamanho-1; // pegando a ultima pos
   for(i=0;i<tamanho;i++){
	   p2[j-i] = p1[i];
   }// fim for
   p2[tamanho]='\0';
   printf("String original:\n");
   puts(p1);
   printf("String invertida:\n");
   puts(p2);
   // testar se é palindromo
   // use o strcmp
   return 0;
}
