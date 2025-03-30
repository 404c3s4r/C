#include <stdio.h>

/*
     - Toda variável precisa ser declarada antes de ser usada
     



*/




int min = 0;
int max = 300;
int variacao = 20; 
float fahr; // variável do tipo float
float celsius; 

int main(){
	celsius = min;
	while(celsius <= max){
		//%2.1f 2 é a largura e o .1 é a casa decimal;
		fahr = ((celsius - 32.0) * 5.0) / 9.0;
		printf("%2.1f\t%2.2f\n", celsius, fahr);
		celsius += 20;

}





}
