#include <stdio.h>

// Eu quero que o programa fa�a a tabuada de qualquer n�mero digitada pelo usuario
// Se o usuario digitar um n�mero inteiro, o programa verifica o n�mero e pede pra digitar novamente 

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


