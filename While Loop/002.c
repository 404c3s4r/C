#include <stdio.h>

#define texto "Calculadora em C, digite um numero:\n"

int main(){
	int n;
	int i = 0; // controlador 
	
	
	printf("%s", texto);
	printf("Digite um numero de 1 a 10: ");
	
	scanf("%d", &n);
	if(n <= 10){
		do{
			printf("%d\n", i*n);
			i++;	
		}while(i <=10);
	}else {
		return; 
	}
}


