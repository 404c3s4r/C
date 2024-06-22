#include <stdio.h> 

#define IN 1 
#define OUT 0 

int main(){


    int c, lines, states, nw, nt;
    
    lines = states = nw = nt = 0;



    while((c = getchar()) != EOF){
        nt++;
        if( c == '\n'){
            lines++;
        }
        if(c == '\n' || c == '\t' || c == ' '){
            states = OUT; 
            
        
        }else if(states == OUT){ 
            states = IN; 
            nw++; 
        }
   
    }
    printf("Linhas: %d\n", lines); 
    printf("N branco: %d", nw); 
    printf("NT: %d", nt); 

    return 0; 

}