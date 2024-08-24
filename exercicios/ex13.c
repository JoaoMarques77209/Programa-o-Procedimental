#include <stdio.h>
#include <stdlib.h>


int main()
{
	float num1, num2; resultado;
	char op;
	
	
	printf("introduza o valor do numero 1 \n");
	scanf("%f", &num1);
	printf("introduza o valor do numero 2 \n");
	scanf("%f", &num2);
	printf("digite a operaçao \n");
	scanf("%c");
	scanf("%c", &op);
	
	switch(op){
		
		case '+':(resultado=num1+num2);
		         printf("resultado e:  %f\n", resultado);
		      break;
  	  	  		
			
	}
	
}
