#include <stdio.h>
#define UPPER 300 
#define LOW 0
#define INCREMENTO 20

/*
FOR
	- Primeiro argumento é o inicío;
	- Segundo argumento é uma condição ( enquanto );
	- Terceiro argumento é o incremento;

#define 
	- Use para valores constantes;
	- A substituição do valor é textual; 
	- Não aloca memória; 
	- Antes da compilação é realizado a substituição.
*/



int main(){

        int fahr;
        for(fahr = UPPER; fahr >= LOW; fahr= fahr-INCREMENTO){
                printf("%d\t %.2f\n", fahr, ((fahr-32.0)*5.0)/9.0);
}




}

