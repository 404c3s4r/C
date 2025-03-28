#include <stdio.h>


void myfunction(char* fullname){ // Estamos passando o endereco da memoria no primeiro caractere 'R'. fullname e um ponteiro para o primeiro caractere R 

	printf("Nome: %s", fullname);

}




int main(){

	char fullname[64]; // Criado o array aqui
	size_t size; 
	do {
	
		printf("Cadastre o nome de usuario aqui: ");
		fgets(fullname, sizeof(fullname), stdin);
	
		size = sizeof(fullname) / sizeof(fullname[0]);// Lembrar que tem o strlen tambem 
		
		
	}while(size < 1 || (size == 1 && fullname[0] == '\n')); // Caractere sozinho, sempre com ' ' ( aspas simples ) 

	
	myfunction(fullname);	
	return 0;
}

 // Exemplo: Roberto 'R', 'O', 'B', 'E', 'R', 'T', 'O', '\n', '\0' Logo, se toda string e um array, precisamos passar o char* para passar o primeiro
