// Escreva um programa em C que converte uma temperatura de Celsius para Fahrenheit ou de Fahrenheit para Celsius, dependendo da escolha do usuário. 
// O programa deve perguntar ao usuário qual conversão ele deseja fazer e então solicitar a temperatura correspondente. 
#include <stdio.h> 

#define texto "Conversor de temperatura"

// Primeiro vamos fazer de celcius para f 

float celsiusforfahrenheit(float celsius){
	return 1.8 * celsius + 32;
}

float fahrenheitforcelsius(float fahrenheit){
	return 	(fahrenheit - 32) / 1.8;
}


int main(){
	int choice;
	float celsius, fahrenheit, result;
	
	printf("%s\n", texto);
	printf("Digite:\n1 Celsius para fahrenheit\n2 Fahrenheit para celsius\n");	
	scanf("%d", &choice);
	
	
	switch(choice) {
		
		case 1:
			printf("Digite um valor em Celsius\n");
			scanf("%f", &celsius);
			result = celsiusforfahrenheit(celsius);
			printf("%.1f F", result);
			break;
		
		case 2:
			printf("Digite um valor em fahrenheit\n");
			scanf("%f", &fahrenheit);
			result = fahrenheitforcelsius(fahrenheit);
			printf("%.1f C", result);
			break;
	default:
		printf("Opcao invalida");
		break;
	
	}

}









/* 
> Case label does not reduce to an integer constant. 
> case == 2 É UMA EXPRESSÃO E TA ERRADO. ( devem ser inteiros constantes ) 
> case 2: É uma expressão onde o 2 é inteiro e constante. 



*/ 
