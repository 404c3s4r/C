#include <stdio.h>

// Fun��o para incrementar um valor por valor (c�pia)
void incrementByValue(int x) {
    x++;
    printf("Valor incrementado dentro da fun��o: %d\n", x);
}

int main() {
    int num = 10;

    // Passando por valor (c�pia)
    incrementByValue(num);

    printf("Valor original: %d\n", num); // Sa�da: 10 (o valor original n�o � alterado)

    return 0;
}

