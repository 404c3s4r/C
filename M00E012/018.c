#include <stdio.h>

int main() {
    float num1 = 0.1;
    float num2 = 0.2;
    float sum = num1 + num2;
    
    printf("Sum: %.10f\n", sum);
    
    return 0;
}


/*
// o resultado para esta opera��o �: 0.3000000119
// A explica��o resumida � que o calculo float � feito em bin�rio, gerando uma imprecis�o uma vez que alguns n�meros n�o podem ser representados de forma decimal finito 
> Os computadores utilizam a representa��o bin�ria para representar ( n�meros ap�s o . ) ou ponto flutuante.
> O double representa melhor os n�meros flutuantes em bin�rio por por armazenar mais digitos, por�m ainda assim precisamos reconhecer os limites.


*/
