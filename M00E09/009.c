#include <stdio.h>

// Cada tipo de variável possui um espaço na memória reservado. 
/* 
int armazena de 2 a 4 bytes;
float armazena 4 bytes;
double armazena 8 bytes; 
char armazena 1byte;



*/


int main(){

	int myInt;
	float myFloat;
	double myDouble;
	char myChar;
	
	printf("%lu\n", sizeof(myInt)); //sizeof é um operador para verificar o espaço reservado pela variável.
	printf("%lu\n", sizeof(myFloat));
	printf("%lu\n", sizeof(myDouble));
	printf("%lu\n", sizeof(myChar));


}
/*

//Testando armazenar mais de 16 números em uma variável do tipo int
/*int main(){

	int myInt;
	printf("write:\n");
	scanf("%d", &myInt);
	printf("%d", myInt);


}
*/
/*
Teste: 111111111111111
Resultado: 307163591
*/


