/*. Implemente um programa de uma máquina de calcular. Esta deverá ter as 
seguintes funcionalidades: 
a. Um menu para escolher a próxima operação, 
b. As operações básicas: soma, subtração, multiplicação e divisão, 
c. Cálculo do fatorial de um número, 
d. Verificar se um determinado número é primo, 
e. Cálculo da potência de um número, 
f. Calcular o seno ou o cosseno, 
g. Calcular o n.º de dígitos de um número, 
h. Raiz quadrada 
i. Raízes de polinómios de segundo grau */


#include <stdio.h>
#include <stdlib.h>


float multi(float a, float b){
    float multi;
	multi = a * b;
	return multi;
	
	}


int main() {
	int n;
	float num1, num2, m;
	printf("boas qual queres");
	printf(" 2 pra multi");
	scanf("%d", &n);
	
	switch(n){
		case 2: printf ("ete num \n");
		scanf("%f", &num1);
		printf("ete num \n");
		scanf("%f", &num2);
		
		m = multi(num1,num2);
		
		printf("multi eh. %f\n", m);
		
		default:
		break;
	
	
	
	}
	
	
	
	
	
	
	
	
	
	
	
}
