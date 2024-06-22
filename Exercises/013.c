        #include <stdio.h>


        #define IN 1
        #define OUT 0 


        int main(){

            int c, nt, nw, state, lines; 

            c = nt = nw = state = lines = 0; 

            state = OUT; 
            

            while((c = getchar()) != EOF){
                nt++;
                
                if( c == '\n'){
                    lines++;
                    state = OUT;
                }
                if(c == '\n' || c == '\t' || c == ' '){
                    state = OUT; 
                }else if(state == OUT){ 
                    state = IN; 
                    ++nw;

                }
            }
        printf("Lines: %d\n", lines);
        printf("Words: %d\n", nw);
        printf("Characters: %d\n", nt);
        
        
        return 0; 

    }