#include <stdio.h>


// funcao declarativa 

int sum(int x);

// method 
int main(){
	int result  = sum(10);
	printf("%d", result);
}

// funcao definitiva 

int sum(int x){
	if(x > 0){
		return x + sum(x-1);
	}else{
		return 0;
	}
}
