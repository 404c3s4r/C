#include <stdio.h>



int main(){

	char carName[] = "Volvo"; // Automaticamente a palavra "volvo" entra {}
	int length = sizeof(carName) / sizeof(carName[0]);
	int i;
	
	
	for(i=0; i < length; i++){
		printf("%c", carName[i]);
	}
}	


/*
Memory Representation:
	carName[0]: 'V'
	carName[1]: 'o'
	carName[2]: 'l'
	carName[3]: 'v'
	carName[4]: 'o'
	carName[5]: '\0'
*/

