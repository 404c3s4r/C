#include <stdio.h>


// A gente quer a média do aluno - OK 
// Se, a média for maior ou igual a 7 aprovado
// Se, a média for menor que 4, não tem direito a prova de recuperação 
// Se, a média for maior que 4 e menor que 7, o aluno tem direito a recuperação

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

	
	
 
