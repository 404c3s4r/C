#include <stdio.h>

int main() { 


    int i; 
    int cont[10]; 
    
	int other; 
    int nwhite; 
    int c; 
    
    
    
    // Inicializando o array com zeros
    for (i = 0; i < 10; i++) {
        cont[i] = 0;
    }

    /*
	// Imprimindo os elementos do array
    printf("Elementos do array cont:\n");
    for (i = 0; i < 10; i++) {
        printf("cont[%d] = %d\n", i, cont[i]);
    }
	*/ 
	
	while(c = getchar() != EOF) {
		if(c >= '0' && c <= '9'){ 
			++cont[c - '0']; // Para converter a entrada ( ASCII ) em numero, precisamos diminuir por '0'.
		}else if(c == '\n' || c == '\t' || c == ' '){
			++nwhite;
		}else{
			++other;
		}
		
	
	}
	
	printf("Digits = ");
	for(i = 0; i < 10; i++){
		printf("%d", cont[i]); 
	}
	
  
}

