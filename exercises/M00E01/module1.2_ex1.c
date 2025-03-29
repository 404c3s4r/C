#include <stdio.h>

/*
     - Toda variável precisa ser declarada antes de ser usada
     



*/




int min = 0;
int max = 300;
int variacao = 20; 
int fahr;
int celsius;

int main(){
	celsius = min;
	while(celsius <= max){

		fahr = ((celsius -32) * 5) / 9;
		printf("%d\t%d\n", celsius, fahr);
		celsius += 20;

}





}
