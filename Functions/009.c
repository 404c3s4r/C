#include <stdio.h>

int soma(int, int);

int main() {
    int result = soma(10, 10);
    printf("%d", result);
    return 0;
}

int soma(int x, int y) {
    if (x > y) {
        return 0;
    } else {
        return x + soma(x + 1, y);
    }
}



