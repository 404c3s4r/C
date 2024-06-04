#include <stdio.h>

int main() { 
    int i; 
    int cont[10]; 
    int other = 0; 
    int nwhite = 0; 
    int c; 
    
    // Inicializando o array com zeros
    for (i = 0; i < 10; i++) {
        cont[i] = 0;
    }
    
    // Inicializando nwhite com 0
    nwhite = 0;
    
    // Leitura dos caracteres até encontrar o fim do arquivo
    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') { 
            ++cont[c - '0']; // Para converter a entrada (ASCII) em número, precisamos subtrair '0'.
        } else if (c == '\n' || c == '\t' || c == ' ') {
            ++nwhite;
        } else {
            ++other;
        }
    }
    
    // Imprimindo os resultados
    printf("Digits = ");
    for (i = 0; i < 10; i++) {
        printf("cont[%d] = %d\n", i, cont[i]);
    }
    printf("\n");
    printf("Whitespaces  = %d\n", nwhite);
    printf("Others = %d\n", other);
	
    return 0;
}

