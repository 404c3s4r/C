#include <stdio.h>



int main(){

	int c, n;
	n = 0;
	while((c = getchar()) != EOF){
		if(c == '\n'){
			n++;
			printf("Linhas até agora: %d\n", n);

		}


	}



}
