#include <stdio.h> 
#include <string.h> /* n esuqecer*/

/* Escreva o c�digo de um programa que pe�a ao utilizador para introduzir uma 
string e que apresente no ecr� a string escrita �ao contr�rio�.
Exemplo : �Universidade� deve ser escrito como �edadisrevinU�.*/
int main()
{
char strings[200];
int i, tamanho; 
printf("Digite uma string: "); 
fgets(strings,200,stdin);  /* gardar string*/  
tamanho = strlen(strings);  /* encontrar tamanho da string*/
printf("A string invertida : "); 
  for(i=tamanho; i>=0; i--) 
     {
       printf("%c" ,strings[i]);
     } 
return 0;
}







