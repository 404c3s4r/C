#include <stdio.h>

void myfunction(int mynumbers[], size_t size) {
    
	int i;
    int soma = 0; // Inicializa a soma como zero

    for(i = 0; i < size; i++) {
        soma += mynumbers[i]; 
        
    }   
	printf("%d%", soma);  
}

int main() {
    int mynumbers[5] = {10, 20, 30, 40, 50};
    size_t size = sizeof(mynumbers) / sizeof(mynumbers[0]);
	
	myfunction(mynumbers, size);

	return 0;
}
