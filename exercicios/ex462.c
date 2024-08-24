#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



void main(void)

{
int a, b, c, maior;

	
	
	printf("insira tres numeros \n");
	scanf ("%d %d %d", &a,&b,&c);
	
	
	maior=aux(a,b);
		
	maior=aux(maior,c);
	
	printf("o maior eh", maior);
	
	

}
