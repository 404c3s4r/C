#include <stdio.h>
int main(){

	char nome[64]; // Sempre coloque o tamanho dos caracteres permitidos na variavel
	
	printf("Digite seu nome completo:\n ");
	fgets(nome, sizeof(nome), stdin);
	
	printf("%s", nome);
	// Output Roberto 
	//scanf considera os espa em branco como uma terminacao de strings 

}
