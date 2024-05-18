#include <stdio.h>

#define texto "Calculadora em C\n"

int main(){
	int n;
	int i = 0;
	printf("%s", texto);
	
	
	
	
	do{
	
		printf("Digite um numero: ");
		scanf("%d", &n); 
		if (n < 1 || n > 10){
			printf("numero invalido, digite novamente\n");
		}	
		
	
	
	
	}while(n < 1 || n > 10); // Enquanto essa condição não for negada, o do se repete

	
	
	
	while(i <= 10){
		printf("%d\n", i*n); 
		i++;
	}
}
