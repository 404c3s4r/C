#include <stdio.h>

#define intro "Aprendendo sobre ponteiros em C"

int main(){

	int variable = 100;
	int* ptr = &variable; //OR  it creates a pointer variable. 
	
	printf("%p\n", ptr); // obtendo o endereco da memoria 
	printf("%d", *ptr); //

}


/*
Com os ponteiros conseguimos: 
> Fazer acesso direto a memoria; 




*/
