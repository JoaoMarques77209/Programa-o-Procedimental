#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // para podermos ter portugues

int main()

{
     
	 char n;
	 setlocale(LC_ALL, "Portuguese"); 
	 
	 
	 printf("introduza uma letra a \n ");
	 scanf("%c", &n);
	 fflush(stdin);     // para a letra 'a' n ser considerada uma variavel,limpa o que ta antes
     while( n!='a') {
	 
	      printf("introduza a letra 'a'\n ");
	      scanf("%c", &n);
	      fflush(stdin);

	 }
	

	
}
