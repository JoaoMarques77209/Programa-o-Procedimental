#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* soma de tds linhas e colunas de uma matriz
e salvar num vetor*/

int main(){

 int l, c, soma, mat[5][10], somaLinhas[5], somaColunas[10];

srand(time(NULL));

for(l=0;l<5;l++){
	for(c=0;c<10;c++){
		mat[l][c] = rand() %10;
	}
}

  for(l=0;l<5;l++){
  	soma = 0;
  	for(c=0;c<10;c++){
  		soma += mat[l][c];
  		
	  }
	   somaLinhas[l] = soma;
  }

  for(c=0;c<10;c++){
  	soma = 0;
  	for(l=0;l<5;l++){
  		soma += mat[l][c];
  		
	  }
	   somaColunas[c] = soma;
  }
  


    for(l = 0; l < 5; l++){
        printf("Linha %d: %d\n", l, somaLinhas[l]);
    }


    for(c = 0; c < 10; c++){
        printf("Coluna %d: %d\n", c, somaColunas[c]);
    }

return 0;





}	

