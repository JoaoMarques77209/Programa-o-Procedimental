
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* fputs pra escrever*/
void escrever(char f[]) {
    FILE *file = fopen(f, "w");
    char texto[500];

    if(file) {
    	printf("digite uma frase ou caracter pra finlaizar\n");
    	scanf("%500[^\n]", texto); /* guardar ate 500 carac ate que seja pressionado no enter*/
    	scanf("%c");
       while(strlen(texto) > 1){ /* tamanho*/
       	fputs(texto,file);  /*meter o conteudo no arquivo(receber e onde meter)*/
        fputc('\n',file);   /* o fgets lê o enter*/
	   	scanf("%500[^\n]", texto);
    	scanf("%c"); /* guardar so um carac pois o de cima n conta o enter*/
	   }
        
        
        fclose(file);
    
	}else
        printf("\nERRO ao abrir arquivo!\n");

}



   
int main() {

    char nome[] = {"conto.txt"};

    escrever(nome);


    return 0;
}
