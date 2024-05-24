#include <stdio.h>
#include <stdlib.h>

int main() { 

	FILE *fptr;
	
	// Open a file
	fptr = fopen("filename.txt", "w"); 
	// write some text to the file 
	fprintf(fptr, "if u write to a file that already exists, the old content is deleted"); 

	// close the file 
	fclose(fptr); 

} 
