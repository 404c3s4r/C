#include <stdio.h>

//Use for quando tiver inicio, fim e incremento definidos. 
int main(){

	int fahr;
	for(fahr = 0; fahr <= 300; fahr+= 20){
		printf("%d\t %.2f\n", fahr, ((fahr-32.0)*5.0)/9.0);
}




}
