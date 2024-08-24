#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* fazer matrix e ver se sao iguais*/
int main(){
	
	srand(time(NULL));
	
	int i,j, m1[10][10],m2[10][10],igual;
	
	for (i=0;i<10;i++){
		for(j=0;j<10;j++){
			m1[i][j] = rand()%2;
			m2[i][j] = rand()%2;
		}
	}
	
		for (i=0;i<10;i++){
	    	for(j=0;j<10;j++){
	    		printf("    %d", m1[i][j]);
		}
		printf("\n");
	}
	 printf("\n");  /* deixar linha de espaço*/

	    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("   %d ", m2[i][j]);
        }
        printf("\n");
    }
    
    
	    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
        	if(m1[i][j] != m2[i][j]){
        		igual = 0;
			}
		
			}
        
	   	}
	   	if(igual == 1){
	   		printf("iguais");
		   }
        else 
        printf("diferente");
	}
	
	
	
	
	

