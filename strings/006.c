#include <stdio.h>
#include <string.h>

 // strlen(stringlen) retorna o tamanho da string != sizeof return the memory size (in byte)

/*

int main() {
	char caracteres[] = "ISTOEUMASTRINGGRANDE";
	printf("%d", strlen(caracteres));
	
}


*/

// Invalida = invalid operands to binary char and char 

/*
int main(){

	char str1[20] = "Hello "; // Cada string vale 4 bytes, logo palavra com 5 letras vale 20 bytes
	char str2[] = "World!";
	printf("%s", str1 + str2);
	

}	
*/


//strcat - Concatenando strings
int main(){
	char str1[20] = "Hello";
	char str2[] = "World!";
	printf("%s", strcat(str1, str2));
}



