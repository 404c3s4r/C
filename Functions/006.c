#include <stdio.h>


void myfunction(char* fullname){

	printf("Nome: %s", fullname);

}




int main(){

	char fullname[64];
	size_t size; 
	do {
	
		printf("Cadastre o nome de usuario aqui: ");
		fgets(fullname, sizeof(fullname), stdin);
	
		size = sizeof(fullname) / sizeof(fullname[0]);
		
		
	}while(size < 1 || (size == 1 && fullname[0] == '\n')); // Caractere sozinho, sempre com ' ' ( aspas simples ) 

	
	myfunction(fullname);	
	return 0;
}
