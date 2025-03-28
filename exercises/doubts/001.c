#include <stdio.h>

#define texto "Entrada e saida de dados."


int main() {
	
	int idade; 
	float altura; 
	char nome[50] = ""; 
	
	
	printf("%s\n", texto);
	printf("Digite sua idade: \n");	
	scanf("%d", &idade);
	printf("Digite sua altura: \n");
	scanf("%f", &altura);
	printf("Digite seu nome: \n");
	scanf("%s", &nome);
	
	printf("Dados informados: \n");
	printf("Idade: %d. \n", idade);
	printf("Altura: %.2f \n", altura);
	printf("Nome:  %s \n", nome);

}
