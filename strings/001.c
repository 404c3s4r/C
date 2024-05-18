#include <stdio.h>

// %s strings 
// %c single character 	
int main(){
	
	char ola[] = "Hello World!";

	for(int i = 0; i < 5; i++){
	
		printf("%c", ola[i]); // if you use %s, the interpreter considers ola[i] as a single character

	}
}
	

