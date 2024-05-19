#include <stdio.h>

// Função para incrementar um valor por valor (cópia)
void incrementByValue(int x) {
    x++;
    printf("Valor incrementado dentro da função: %d\n", x);
}

int main() {
    int num = 10;

    // Passando por valor (cópia)
    incrementByValue(num);

    printf("Valor original: %d\n", num); // Saída: 10 (o valor original não é alterado)

    return 0;
}

