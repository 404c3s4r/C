#include <stdio.h>



// O double armazena at� 8 bytes
// Independente de utilizar float ou double, o printf imprimir� de 6 � 7 caracteres. O printf pode arredondar os n�meros.
// Mesmo que o printf arredonde, a precis�o do n�meros especificados em double ainda estar� l�.
int main(){

	double n;
	printf("Digite um numero:\n");
	scanf("%lf", &n);
	
	printf("O numero digitado: %lf", n);

}
