#include <stdio.h>
/*

%d Formata um número inteiro
%f Formata um valor real 
%.2f Formata um valor real em apenas 2 casas decimais.
%c Formata um único caractere ( um único caractere é rodeado de aspas simples ) 

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


//Se tentarmos colocar um número flutante dentro de %d ? 

int main() {
    printf("Hello world %d.\n", 14.2);  
    return 0;



	Nesse caso, teremos um que a saída do será 1717986918
	> Isso acontece queando o processo de compilação somado ao ambiente de execução que estamos interpreta e gera uma saída. 
	> Se tentarmos executar o programa supracitado sendo o 14.2 um double e %d int, poderia gerar um erro. 
	> De qualquer forma, o resultado de saída é um valor que não tem relação o input. 
	> Lembre que o compilador passa o C passa por um processo de compilação, logo depende do compilador e como ele irá lidar com o erro de tipo.  
*/	











