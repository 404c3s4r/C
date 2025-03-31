#include <stdio.h>

int main(){

	int c = getchar();
	while(c != EOF){
		putchar(c);
		c = getchar();
}}


/*
EOF = ENF OF LIFE;
Pode assumir valores -1/255/0/-128 depende do compilador;
É um valor retornado por getchar();
Indifica que não há valores a serem lidos.


*/
