/* Implemente um algoritmo que calcule e apresente no ecrã a soma de todos os 
elementos do vetor que estejam numa posição de índice ímpar */


#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int v[4];
	int i;
	int contador = 0;
	
	
	for(i = 0; i < 4; i++){
		printf("mete o num %d\n", i);
		scanf("%d", &v[i]);
		

	   }
	
	for(i = 0; i < 4; i++){
		
		
		if( i % 2 != 0){
			
			contador = contador + v[i];
		}
		
		}
		printf("soma: %d\n", contador);
	
	}

