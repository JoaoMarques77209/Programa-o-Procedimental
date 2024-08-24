#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* soma de tds elementos de uma matriz*/
int main(){
	

	
	int i,j, soma = 0, mat[5][5];
	srand(time(NULL));
	for(i=0;i<5;j++){
		for(j=0;j<5;j++){
			mat[i][j] = rand() %10;
		}
	}
	 
	 		for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			soma += mat[i][j];
			printf("%d", mat[i][j]);
	
		}
		printf("\n");
	}
	
   printf("a soma e: %d\n", soma);

	
}
	 
	
	
