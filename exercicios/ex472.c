/*. Implemente um programa de uma m�quina de calcular. Esta dever� ter as 
seguintes funcionalidades: 
a. Um menu para escolher a pr�xima opera��o, 
b. As opera��es b�sicas: soma, subtra��o, multiplica��o e divis�o, 
c. C�lculo do fatorial de um n�mero, 
d. Verificar se um determinado n�mero � primo, 
e. C�lculo da pot�ncia de um n�mero, 
f. Calcular o seno ou o cosseno, 
g. Calcular o n.� de d�gitos de um n�mero, 
h. Raiz quadrada 
i. Ra�zes de polin�mios de segundo grau */


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
