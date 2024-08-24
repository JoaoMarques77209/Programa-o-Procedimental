#include <stdio.h>
#include <stdlib.h>

void main()

{ 
    float nota1, nota2, media;
    
    printf("Introduza a nota obltida na frequencia 1: \n");
    scanf("%f", &nota1);
    printf("Introduza a nota obtida na frequencia 2: \n");
    scanf("%f", &nota2);
    
    media = ( nota1 + nota2 ) /2;
		printf("a sua media e': %.1f\n", media);
		
		
	if (media >=9.5) {
		printf("esta aprovado");
	} 
	else {
		printf("nao esta aprovado");
		
	}	
	system("pause");
exit(0);
	
}
