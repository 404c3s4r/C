#include <stdio.h>

//Inserindo dados pelo teclado em C - scanf - entrada de dados

//scanf é uma biblioteca padrão de entrada ( stdio.h ) 
main(){
	int idade;
	int ano; 
	float peso;

	printf("Digite sua idade:\n");
	scanf("%d", &idade); //Espera entrada do usuário para atribuir à variável. 
	printf("Digite o ano de nascimento:\n");
	scanf("%d", &ano);
	printf("Digite o seu peso:\n");
	scanf("%f", &peso);

}


