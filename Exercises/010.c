#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
    int c, lines, words, chars, state;

    lines = words = chars = 0;
    state = OUT;

    while ((c = getchar()) != EOF) {
        chars++;
        if (c == '\n') {
            lines++;
        }
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            words++;
        }
    }

    printf("Lines: %d\n", lines);
    printf("Words: %d\n", words);
    printf("Characters: %d\n", chars);

    return 0;
}
