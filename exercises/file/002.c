#include <stdio.h>
#include <stdlib.h>


int main(){ 
	FILE *fptr;
	
	fptr = fopen("C:\\Cursos\\filename.txt", "w"); 
	fclose(fptr);
	return 0;
		
}

