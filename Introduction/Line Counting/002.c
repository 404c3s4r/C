#include <stdio.h>

int main() {
    char nome  = 'A'; // A character written between single quotes represents an integer value equal to the numerical
    int result = nome - 1;  // 'A' is a character; in ASCII character set its value 65 - 1 = 64 or (@) 
    printf("Result: %d\n", sizeof(result)); 

    return 0; 
}

