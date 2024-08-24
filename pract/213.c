#include <stdio.h>
#include <stdlib.h>
/* fprintf*/
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
    char texto[500];

    if(file){
    	printf("texto lido\n");
    	while(!feof(file)){ /* enqt n for o fim do arquivo*/
		if(fgets(texto,500,file)) /* pra ler do arquivo*/ /* se conseguir ler ent...*/
    	printf("%s", texto);
    		}
    	
        fclose(file);
    }
    else
        printf("\nERRO ao abrir arquivo!\n");
}

int main() {

    char nome[] = {"conto.txt"};

    escrever(nome);
    //ler(nome);

    return 0;
}
