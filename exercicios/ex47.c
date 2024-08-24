#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int dif(int a) {

	while(a<0 || a>20) {
		printf("erro , introduza outro: \n");
		scanf("%d", &a);
		
	}
	return a;
		}	
	
int main(void){
	int val,i;
	
	for (i = 1; i<=100; i++){
		printf("introduza um entre 0 e 20: \n ");
		scanf("%d", &val);
		val=dif(val);
		printf("o numero escrito foi: %d\n", val);
		
	}
	
}
	
	
	


