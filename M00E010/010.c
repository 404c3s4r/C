#include <stdio.h>

int main(){
	int itensTotal;
	float itensPreco = 2.99; 
	char currency = '$';
	float total; 
	
	
	printf("O $ de cada item %.2f \n",itensPreco);
	printf("Quantos itens vocee quer comprar:\n");
	scanf("%d", &itensTotal);
	total = itensTotal * itensPreco;
	printf("O total da compra: %.2f", total);
	printf("%c", currency);
}
