#include <stdio.h>
#include <stdlib.h>
/* ler e escrever um arquivo com funcao fgets*/
int main(){

FILE *file;
char palavra;

file = fopen("ler.txt", "w+");

if(file){
	printf("escreva e pressione ENTER pra sair\n");
	scanf("%c", &palavra);
	while(palavra != '\n'){
		fputc(palavra, file);
		scanf("%c", &palavra);
		}
		rewind(file);
		
		printf ("texto lido\n");
		while (!feof(file)){
			palavra = fgetc(file);
			printf("%c", palavra);
		}
		fclose(file);
}
else 
printf("erro ao abrir\n");

return 0;


}
