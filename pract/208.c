#include <stdio.h>
#include <stdlib.h>

int main(){

FILE *cara;
char palavra;

cara = fopen("ler.txt", "w");

if(cara){
	printf("escreva e pressione ENTER pra sair\n");
	scanf("%c", &palavra);
	while(palavra != '\n'){
		fputc(palavra, cara);
		scanf("%c", &palavra);
		}
		fclose(cara);
}
else 
printf("erro ao abrir\n");

return 0;


}
