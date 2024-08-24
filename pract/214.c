/* lendo do arquivo a partir do fscanf*/
#include <stdio.h>
#include <stdlib.h>

void escrever(char f[]) {
    FILE *file = fopen(f, "w");
    char nome[100];
    int opcao, idade;
    float altura;
    
    if(file) {
    do{
    	printf("nome,idade,altura\n");
    	scanf("%100[^\n]%d%f", nome, &idade, &altura);
    	fprintf(file,"%s %d %f", nome, idade, altura);
    	printf("1 pra continuar");
    	scanf("%d", &opcao);
    	scanf("%c");
    	
	}while(opcao == 1);
        
        
        fclose(file);
    
	}else
        printf("\nERRO ao abrir arquivo!\n");

}

void ler(char f[]) {
    FILE *file = fopen(f, "r");
    char nome[100];
    int idade;
    float altura;

    if(file){
    	printf("dados lidos\n");
    	while(fscanf(file,"%s%d%d", nome, idade, &altura) != -1) /* dá menos um qnd n consegue ler*/
    	     printf("nome, idade, altura  %s %d %f", nome, idade, altura);
    	     
    
    		
    	
        fclose(file);
    
	}
	
	else printf("\nERRO ao abrir arquivo!\n");


}

int main() {

    char nome[] = {"conto.txt"};

    //escrever(nome);
    ler(nome);

    return 0;
}
