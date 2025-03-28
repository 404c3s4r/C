#include <stdio.h>




// O sizeof retorna um unsigned long, e o formatador %lu formata esse resultado.
main() {

	int idINT; 
	float idFLOAT;
	char idCHAR;
	double idDOUBLE;
	
	
	
	printf("%lu Bytes\n", sizeof(idINT));
	printf("%lu Bytes\n", sizeof(idFLOAT));
	printf("%lu Byte\n", sizeof(idCHAR));
	printf("%lu Bytes\n", sizeof(idDOUBLE));
	
}
