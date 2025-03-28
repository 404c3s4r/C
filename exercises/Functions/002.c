#include <stdio.h>
#include <string.h>

#define texto "This exercise is from W3C"

void myfunction(char name[64], size_t size) {
    int i;
    
    printf("Seu nome e: %s", name); 
    
}

int main() {
    char fullname[64];
    int j = 0;
    while (j < 10) {
        printf("Create random name's: ");
        fgets(fullname, sizeof(fullname), stdin);
        size_t len = strlen(fullname);
        myfunction(fullname, len);
        j++;
    }
    return 0;
}
