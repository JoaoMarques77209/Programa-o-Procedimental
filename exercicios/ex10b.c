#include <stdio.h>
#include <stdlib.h>

void main()

{ 
    float nota1, nota2, media;
    
     printf("Introduza a nota obtida na frequencia 1: \n");
    scanf("%f", &nota1);
    printf("Introduza a nota obtida na frequencia 2: \n");
    scanf("%f", &nota2);
    
    	if (nota1 <=8.5 || nota2 <=8.5) {
		printf("esta reprovado");
		
	}
        else {
        	 media = ( nota1 * 0.4) + (nota2 * 0.6);
    
    
    printf("a sua media e': %.1f\n", media);
	
	    if (media >=9.5) {
		printf("esta aprovado");
	} 
	else {
		printf("nao esta aprovado");
		    		
		}

   }

}
