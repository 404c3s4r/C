#include <stdio.h>

// size_t mais apropriado para lidar com tamanhos; 
// %zu usado para imprimir valores do tipo size_t  


int main() {

	int mynumber[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	size_t size = sizeof(mynumber) / sizeof(mynumber[0]); //size_t usado para indexar arranjos de arrays 
    //printf("Tamanho do array: %zu bytes\n", size); // Impressao do tamanho do array
	int i;
	for(i = 0; i < size; i++){
		printf("Posicao da memoria: %p\n", &mynumber[i]);
	
	
	}

}
