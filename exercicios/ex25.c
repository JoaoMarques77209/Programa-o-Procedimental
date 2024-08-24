#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, soma = 0;

    for(i =1; i <= 2; i++)// 1000
        if(i % 2 == 0) // 1000
            soma =+ i; // soma = soma + i -> 500

    printf("Soma dos pares de 1 a 6: %d\n\n", soma);
}
