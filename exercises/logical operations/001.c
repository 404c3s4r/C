#include <stdio.h>


// A gente quer a m�dia do aluno - OK 
// Se, a m�dia for maior ou igual a 7 aprovado
// Se, a m�dia for menor que 4, n�o tem direito a prova de recupera��o 
// Se, a m�dia for maior que 4 e menor que 7, o aluno tem direito a recupera��o

#define texto "Condicao do aluno\n"

int main(){
	float n1;
	float n2;
	float media; 
	
	
	
	printf("%s", texto);
	printf("Nota da primeira unidade;\n ");
	scanf("%f", &n1);
	printf("Nota da segunda unidade:\n ");
	scanf("%f", &n2);
	media = (n1+n2) / 2;
	printf("A media do aluno foi: %.1f:",media);
	
	if (media >= 7){
		printf("Aprovado");
	
	}else if(media >=4 && media < 7 ){
		printf("Recuperacao");
	}else{
		printf("Reprovado!");
	}
} 	

	
	
 
