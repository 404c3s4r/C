#include <stdio.h>

int main() {
    char nome  = 'A';
    int result = nome - 1;  
    printf("Tamanho de result em bytes: %lu\n", sizeof(result)); 

    return 0;
}

