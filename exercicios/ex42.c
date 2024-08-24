#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



void main(void)

{
    int idade;
    char genero;
    int i = 1;
    int masc17=0, masc18=0, fem17=0, fem18=0, id17=0, id18=0;
    
    

	for (i = 1; i <= 100; i++) {
		
	printf("Com que idade começou a trabalhar: \n");
	scanf("%d", &idade);
	fflush(stdin);
	printf("Qual o seu genero (M ou F): \n");
	scanf("%c", &genero);
	
	if (idade < 18){
		id17++;
	}
	else { id18++;
	}
	 if ( idade <= 18 && genero == 'M' ) {
	 	masc17++;
	 }
	 else {
	 	if ( idade >= 18 && genero == 'M') {
	 		masc18++;
		 }
		 
	else {
		if( idade <= 18 && genero == 'F'){
			fem17++;
		}
		
	else {
		if( idade >= 18 && genero == 'F'){
			fem18++;
		}
	}
	}
	}
}
	
	printf("Sexo masculino maior de idade: %d\n",masc18);
    printf("Sexo feminino maior de idade: %d\n",fem18);
    printf("Sexo masculino menor de idade: %d\n",masc17);
    printf("Sexo feminino menor de idade: %d\n",fem17);
    printf("Começou a trabalhar menor de idade: %d\n",id17);
     printf("Começou a trabalhar maior de idade: %d\n",id18);
    

	
}
