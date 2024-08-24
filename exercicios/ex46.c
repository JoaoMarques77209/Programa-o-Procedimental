#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



void main(void)

{
	int a, b, c;
	
	printf("Introduza um numero: \n");
	scanf("%d", &a);
	printf("Introduza um numero: \n");
	scanf("%d", &b);
	printf("Introduza um numero: \n");
	scanf("%d", &c);
	
	
	if (a>b && a>c) {
		printf("o maior numero eh: %d\n",a );
		
	}
	else if (b>a && b>c) {
		printf("o maior eh %d\n", b);
	}
	else {
			printf("o maior eh %d\n",c);
	}
	
	
	
	
	
	
	
	
	
	
	

     return 1;
}
