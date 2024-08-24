#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/* criar matriz 3x3 */

int main (){

    int i = 0, j = 0;
    char mat[3][3];

    srand(time(NULL));
    
    for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
    		mat[i][j] = rand() % 100;
		printf("%s", mat[i][j]);
	
    	
	
	}
	
}


}
