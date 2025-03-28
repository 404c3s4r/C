#include <stdio.h>
 
 
 // Function declaration:  doesn't provide the function body, it only provides information;
int soma(int, int); 


// The main method: Where the logic begins and where the output is initiated, however, it's not the endpoint of the execution.
int main(){
	int result; 
	result = soma(5, 5); 
	printf("Resultado: %d", result);

}

// Function definition: This part contains the body, and it's where the logic of the function is built
int soma(int x, int y){
	return x + y;
}
