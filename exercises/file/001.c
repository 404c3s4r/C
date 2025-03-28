#include <stdio.h>
#include <stdlib.h>


//create a file 

int main(){
	FILE *fptr;
	fptr = fopen("filename.txt", "w");
	
	// close the file 
	fclose(fptr);
}
