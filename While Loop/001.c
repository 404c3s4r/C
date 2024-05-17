#include <stdio.h>

// Eu quero que o programa faça a tabuada de qualquer número digitada pelo usuario
// Se o usuario digitar um número inteiro, o programa verifica o número e pede pra digitar novamente 

#define texto "Calculadora em C, digite um numero:\n"

int main(){
	int n;
	int i = 0; // controlador 
	
	
	printf("%s", texto);
	printf("Digite um numero: ");
	
	scanf("%d", &n);
	
	while(i <= 10){
		printf("%d\n", i*n);
		i++;
	}
}


