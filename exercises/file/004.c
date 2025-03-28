#include <stdio.h>

int main(){ 
	FILE *fptr; 
	
	//open a file " r " 
	fptr = fopen("filename.txt", "r"); 
	// we need to create a string that should be big enough to store the content of the file 
	// Store the content of the file
	char mystring[100]; 
	fgets(mystring, 100, fptr); 
	printf("%s", mystring);
	fclose(fptr);
}
