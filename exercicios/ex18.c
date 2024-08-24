#include <stdio.h>
#include<stdlib.h>
int main()

{

int num;

printf("Numero?\n");

scanf("%d", &num);

if(num%3 == 0) {
printf("O numero a divisivel por 3\n", num);

}
else {
printf("nao e!\n", num);

}


