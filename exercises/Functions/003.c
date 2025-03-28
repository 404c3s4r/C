#include <stdio.h>


#define texto "Calculadora usando funcoes"

void myfunction(int n1, int n2){ 
	int result = n1 + n2; 
	printf("%d", result);  	

}


int main(){
	int n1; 
	int n2; 
	
	printf("Digite um numero: ");
	scanf("%d", &n1); 
	
	printf("Digite outro numero: "); 
	scanf("%d", &n2); 

	myfunction(n1, n2); 

}
