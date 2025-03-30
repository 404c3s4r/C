#include <stdio.h>

/*

Primeiro argumento é o inicío;
Segundo argumento é uma condição ( enquanto );
Terceiro argumento é o incremento;

*/

int main(){

        int fahr;
        for(fahr = 300; fahr >= 0; fahr= fahr-20){
                printf("%d\t %.2f\n", fahr, ((fahr-32.0)*5.0)/9.0);
}




}

