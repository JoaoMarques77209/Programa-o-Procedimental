#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main()
{
setlocale(LC_ALL, "Portuguese");
int numero, maior, menor;
int i;

printf("Coloque o primeiro numero inteiro: ");
scanf("%i", &numero);

maior=numero;
menor=numero;

for(i=1; i<20; i++)
{
printf("Coloque o %dº numero inteiro: ",i+1);
scanf("%i", &numero);

if(numero>maior)
maior=numero;
else
if(numero<menor)
menor=numero;
}


printf("O menor numero colocado é:\n %d", menor);
printf("\nO maior numero colocado é:\n %d", maior);

getch();
}
