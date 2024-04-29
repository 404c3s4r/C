#include <stdio.h>

// Cada tipo de vari�vel possui um espa�o na mem�ria reservado. 
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
	
	printf("%lu\n", sizeof(myInt)); //sizeof � um operador para verificar o espa�o reservado pela vari�vel.
	printf("%lu\n", sizeof(myFloat));
	printf("%lu\n", sizeof(myDouble));
	printf("%lu\n", sizeof(myChar));


}
/*

//Testando armazenar mais de 16 n�meros em uma vari�vel do tipo int
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


