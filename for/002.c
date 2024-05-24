#include <stdio.h>


int main(){ 
	FILE *fptr;
	
	// Open a file in a read mode 
	if ((fptr = fopen("filename.txt", "r")) == NULL) { 
		
		printf("Not able to open the file ");
		
		
		// program exists if the file pointer returns null. 
		return 1; 
	}
	 

	// store data 
	char mytext[100];
	
	
	//read and print the file contents 
	while(fgets(mytext, 100, fptr)){ 
		printf("%s", mytext); 
	
	
	} 

	
	
}	
