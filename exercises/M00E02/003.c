#include <stdio.h>

int main()


{

	int min = 0;
	int max = 300;
	int incremento = 20;
	int celsius;
	int fahrenheit = min;


	fahrenheit = min;
	while(fahrenheit <= max){

		celsius = (fahrenheit - 32) / 1.8;
		printf("%d\t%d\n", fahrenheit, celsius);

		fahrenheit = fahrenheit + incremento; 

}




}
