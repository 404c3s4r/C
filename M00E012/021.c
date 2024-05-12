#include <stdio.h>


int main(){
	int IDitems;
	float const_por_item = 1.99;
	char currency = '$';

	
	printf("Tudo apenas por %.2f\n", const_por_item);

	printf("Quantos itens a comprar?\n");
	scanf("%d", &IDitems);
	float total = IDitems * const_por_item;	
	
	printf("O valor total da compra: %.2f", total);
	return 0;
	
}	
