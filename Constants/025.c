#include <stdio.h>


// Constants 

int main() {

	const float PI = 3.14; // Constant 
	float raio;

	
	printf("Constante PI: %.2f\n", PI);
	printf("Digite o valor do raio para saber a area: \n");
	scanf("%f", &raio);
	float result = PI * ( raio * raio);	
	printf("A area do circulo e: %.2f", result);
	

}
