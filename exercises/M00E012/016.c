#include <stdio.h>



// O double armazena até 8 bytes
// Independente de utilizar float ou double, o printf imprimirá de 6 à 7 caracteres. O printf pode arredondar os números.
// Mesmo que o printf arredonde, a precisão do números especificados em double ainda estará lá.
int main(){

	double n;
	printf("Digite um numero:\n");
	scanf("%lf", &n);
	
	printf("O numero digitado: %lf", n);

}
