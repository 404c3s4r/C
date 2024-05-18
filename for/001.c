#include <stdio.h>


#define texto "Calculadora em C\n"

int main(){
	int n;
	int i = 0;
	printf("%s", texto);
		

	do{
		printf("Digite um numero: ");
		scanf("%d", &n);			
		if(n < 1 || n > 10){
			printf("Digite um numero entre 1 e 10\n");
		}
	}while(n < 1 || n > 10);
	

	
	for(i=0; i <= 10; i++) //Inicio, condição e passo
		printf("%d\n", n*i);
	
	
	
}
