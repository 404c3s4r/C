#include <stdio.h>

#define intro "Soma entre 2 numeros:\n ";


int myfunction(int n1, int n2){

	int result = n1 + n2; 
	return result; 
	
}


int main(){
	int n1;
	int n2;
	int result; 
	printf("Digite 1 numero: ");
	scanf("%d", &n1);
	
	printf("Digite outro numero: ");
	scanf("%d", &n2);
	
	result = myfunction(n1, n2);
	printf("%d", result);
}
