#include <stdio.h>


int main(){ 
	FILE *fptr;
	fptr = fopen("filename.txt", "r"); 
	
	
	// create a variable to store data 
	char mytext[100];
	
	
	// read 
	while(fgets(mytext, 100, fptr)){
		printf("%s", mytext); 
		
	} 
	fclose(fptr); 
}
