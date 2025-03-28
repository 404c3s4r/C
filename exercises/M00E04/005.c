#include <stdio.h>
/*
Tipos de Vari�veis: 
int - armazenar inteiros 
float - armazena ponto flutuante 
char - armazena caracteres �nicos como 'a' ou 'b'

Declarando uma vari�vel: 

type variableName = value;
int inteiro = 0;
float flutuante = 1.2;
char sexo = 'F';

*/

//Exemplo 1:

/*
int main() { 
	int number; // No C conseguimos apenas criar uma vari�vel e atribuir o valor posteriormente
	number = 15;			
}


*/
//No python, java e em outras linguagens conseguimos imprimir o valor da vari�vel, em C n�o � bem assim...

/*
int myNum = 15;
printf(myNum);  // Nada acontece ( nenhuma sa�da � mostrada ) 
*/

//Para a sa�da funcionar precisamos dizer al�m o tipo da vari�vel, o tipo de formata��o para a fun��o printf  

//Definindo vari�vel tipo int e formata��o %d inteira
/*

int main(){
	int myNum = 15; // Vari�vel tipo int 
	printf("%d", myNum);  // formata��o da vari�vel %d inteiro 
}
*/



// Definindo vari�vel float e formata��o %f decimal 
/*
int main(){
	float myNum = 15.2; // Vari�vel tipo float 
	printf("%.2f", myNum);  // formata��o da vari�vel %f para float
}

*/


// Definindo vari�vel char e formata��o do tipo %c �nico dado 

int main(){
	char sexo = 'F'; // Vari�vel tipo char 
	printf("%c", sexo);  // formata��o da vari�vel %c dado �nico
}










