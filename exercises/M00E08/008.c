#include <stdio.h>
// Calculate the Area of a Rectangle


int main(){
	float lenght;
	float width;
	float area;
	printf("Enter the height\n"); //Scanf precisa do operador &variavel
	scanf("%f", &lenght);
	printf("Enter the width\n");
	scanf("%f", &width);
	area = lenght * width;
	printf("%.2f", area);
}

