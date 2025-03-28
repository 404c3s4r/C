#include <stdio.h>
/*
Tipos de Variáveis: 
int - armazenar inteiros 
float - armazena ponto flutuante 
char - armazena caracteres únicos como 'a' ou 'b'

Declarando uma variável: 

type variableName = value;
int inteiro = 0;
float flutuante = 1.2;
char sexo = 'F';

*/

//Exemplo 1:

/*
int main() { 
	int number; // No C conseguimos apenas criar uma variável e atribuir o valor posteriormente
	number = 15;			
}


*/
//No python, java e em outras linguagens conseguimos imprimir o valor da variável, em C não é bem assim...

/*
int myNum = 15;
printf(myNum);  // Nada acontece ( nenhuma saída é mostrada ) 
*/

//Para a saída funcionar precisamos dizer além o tipo da variável, o tipo de formatação para a função printf  

//Definindo variável tipo int e formatação %d inteira
/*

int main(){
	int myNum = 15; // Variável tipo int 
	printf("%d", myNum);  // formatação da variável %d inteiro 
}
*/



// Definindo variável float e formatação %f decimal 
/*
int main(){
	float myNum = 15.2; // Variável tipo float 
	printf("%.2f", myNum);  // formatação da variável %f para float
}

*/


// Definindo variável char e formatação do tipo %c único dado 

int main(){
	char sexo = 'F'; // Variável tipo char 
	printf("%c", sexo);  // formatação da variável %c dado único
}










