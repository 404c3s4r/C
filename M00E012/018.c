#include <stdio.h>

int main() {
    float num1 = 0.1;
    float num2 = 0.2;
    float sum = num1 + num2;
    
    printf("Sum: %.10f\n", sum);
    
    return 0;
}


/*
// o resultado para esta operação é: 0.3000000119
// A explicação resumida é que o calculo float é feito em binário, gerando uma imprecisão uma vez que alguns números não podem ser representados de forma decimal finito 
> Os computadores utilizam a representação binária para representar ( números após o . ) ou ponto flutuante.
> O double representa melhor os números flutuantes em binário por por armazenar mais digitos, porém ainda assim precisamos reconhecer os limites.


*/
