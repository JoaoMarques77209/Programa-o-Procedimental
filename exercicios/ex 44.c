/* Implemente um programa que calcule o maior de 3 números reais inseridos pelo 
utilizador. Implemente para o efeito uma função que calcule/retorne o maior de
dois valores reais. */

#include <stdio.h>
#include <stdlib.h>

float numvalor(float n1, float n2, float n3){
	int n = n1;
	
	if(n < n2){
		n = n2;
	}
	if( n < n3){
		n = n3;
	}
	
	return n;
}







int main() {
	
	float n1, n2, n3;
	float maior;
	
	printf("numeo 1");
	scanf("%f", &n1);
	printf("numeo 2");
	scanf("%f", &n2);
	printf("numeo 1");
	scanf("%f", &n3);

	maior = numvalor(n1, n2, n3);
	
	printf("o maior eh: %f\n " , maior);
	

	
	
}









 
