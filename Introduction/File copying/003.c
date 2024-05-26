#include <stdio.h>

int main() {
    char c = 'A';  // Declare a variable 'c' and assign it the character 'A'
    printf("The stored character is: %c\n", c);  // Print the stored character
    
    c = c - 1; // Subtract 1 - ASCII "A" = 65. In ASCII, the symbol before 65 is '@'.
    printf("After subtracting 1, the stored character is: %c\n", c);  

    return 0;
}
// Type char is specifically meant for storing such character data, but any integer type can be used

// "A" 65 0100 0001 
// @   64 0100 0000
