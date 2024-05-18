#include <stdio.h>


//Modify Strings


int main(){
	char ola[] = "Hello World!";
	
	for(int i=0; i < 11; i++){
		ola[i] = 'x';
	}
	printf("%s", ola);
}
