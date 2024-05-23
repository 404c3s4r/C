#include <stdio.h>

// Funcao declarativa 
int fatorial(int);


// method 
int main(){
	int result;
	result = fatorial(5);
	printf("%d", result);
}

//Funcao de definicao
int fatorial(int x){
	if(x == 1){
		return 0;
	}else{
		return x * fatorial(x-1);
	}
}
