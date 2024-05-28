#include <stdio.h>
//write a program to:
//count the number of occurrences of each digit; 
//count white space, characteres ( blank, tab, newline ) 
//print other characters;

int main(){
	char c; 
	int n; 
	int whitespace;
	int others; 
	
	
	
	while((c = getchar()) != EOF){
		if(c > '0'  && c <= '9'){
			n++; 
		}else if(c == '\n' || c == '\t' || c == ' ' ){ // single quotes represent single character 
			whitespace++; 
		}else{
			others++;
		}
	
	}
	
}
