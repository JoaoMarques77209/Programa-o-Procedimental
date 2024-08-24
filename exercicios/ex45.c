/*45. Implemente um programa que permita inserir uma sequência de 100 elementos 
do tipo inteiro com valores entre 0 e 20. Utilize uma função que permita ao 
utilizador inserir um valor inteiro apenas pode ter valor entre 0 e 20. Se tal não 
acontecer deve insistir na leitura. */



#include <stdio.h>
#include <stdlib.h>



void numn(int n){
	int i;

	
	for(i = 1; i <= 100; i++ ){
		printf("insere numero \n");
		scanf("%d", &n);
		
		if( n <0 || n>20){
			printf("invalido\n");
			i--;
		} 
	printf("nume inseridos %d\n", i);	
	
	}


int main() {
	
	int i;
	int n;
    
     numn(n);
		
	}	

}
