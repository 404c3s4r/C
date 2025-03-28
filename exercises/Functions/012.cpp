#include <stdio.h>
#include <math.h>


// funcao declarativa 
int raiz(int);


// funcao mathod 
int main(){
	int result = raiz(16);
	printf("%d", result);
}
	
// funcao definitiva 
int	raiz(int x){
	return sqrt(x);
}
