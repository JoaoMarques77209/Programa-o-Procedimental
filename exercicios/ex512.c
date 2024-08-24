/*. Crie um programa que preencha um vetor V de N elementos do tipo inteiro. O 
programa deverá ter pelo menos os seguintes subprogramas: 
a. LerVetor, 
b. MostrarVetor. */


#include <stdio.h>
#include <stdlib.h>



void mostravet(int *v){
int i;
int n;
	for(i = 0; i < 3; i++){
		printf("insira o valor %d\n", v[i]);
	   }

}

void levetor(int *v ){
	int i;
	int n;
	for(i = 0; i < 3; i++){
	scanf("%d", &v[i]);
	   }
}


int main(){
	
	int v[3];
	int i;
	int n;

 levetor(v);
 mostravet(v);
 
	
	}

