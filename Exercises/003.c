#include <stdio.h>

// Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank 

int main() {
    int c;
    int last_char_was_space = 0;
    
    while ((c = getchar()) != EOF) {
        if (c == ' ') {

            if (!last_char_was_space) {
                putchar(c);
                last_char_was_space = 1;
        } else {
            putchar(c);
            last_char_was_space = 0;
        }
    }

    return 0;
}

/* 
Explanation: When it encounters a white space, it checks !last_char_was_space, the negation of 0 is 1 (true), 
so the code is executed and the white space is printed. When it encounters another white space, !last_char_was_space is checked 
again, however, now the variable is 1 and !1 = 0 (false), so the block is not executed. If it hits a character, it falls into the else normally.
*/

