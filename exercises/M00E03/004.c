#include <stdio.h>
/*

%d Formata um n�mero inteiro
%f Formata um valor real 
%.2f Formata um valor real em apenas 2 casas decimais.
%c Formata um �nico caractere ( um �nico caractere � rodeado de aspas simples ) 

Exemplos abaixo: 
int main() {
    printf("Hello world %d.\n", 10);  
    return 0;
}

int main() {
    printf("Hello world %f.\n", 10.0);  
    return 0;

} 


int main() {
    printf("Hello world %.2f\n", 10.23123233);  
    return 0;

}




int main() {
    printf("Hello world %c\n", 'a');  
    return 0;
}



int main() {
    printf("Hello world %s\n", "Uma string inteira");  
    return 0;
}


//Se tentarmos colocar um n�mero flutante dentro de %d ? 

int main() {
    printf("Hello world %d.\n", 14.2);  
    return 0;



	Nesse caso, teremos um que a sa�da do ser� 1717986918
	> Isso acontece queando o processo de compila��o somado ao ambiente de execu��o que estamos interpreta e gera uma sa�da. 
	> Se tentarmos executar o programa supracitado sendo o 14.2 um double e %d int, poderia gerar um erro. 
	> De qualquer forma, o resultado de sa�da � um valor que n�o tem rela��o o input. 
	> Lembre que o compilador passa o C passa por um processo de compila��o, logo depende do compilador e como ele ir� lidar com o erro de tipo.  
*/	











