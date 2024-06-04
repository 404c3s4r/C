#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main() {
    int c;
    int char_count[256] = {0}; // Array para contar a frequência de cada caractere
    int is_repeated[256] = {0}; // Array para marcar se um caractere é repetido

    while ((c = getchar()) != EOF) {
        char_count[c]++; // Incrementa a contagem do caractere atual
    }

    printf("Caracteres repetidos: ");
    for (int i = 0; i < 256; i++) {
        if (char_count[i] > 1) { // Se o caractere foi digitado mais de uma vez
            putchar(i); // Imprime o caractere
            is_repeated[i] = TRUE; // Marca o caractere como repetido
        }
    }

    return 0; 
}

