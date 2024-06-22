#include <stdio.h>



int main(){

    double nc; 
    for(nc=0; getchar() != EOF; nc++ ){
        

        if(getchar() != '\n'){
            ++nc; 

        }
    
    }
printf("%.0f", nc);
}