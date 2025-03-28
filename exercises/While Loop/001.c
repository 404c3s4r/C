#include <stdio.h>

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


