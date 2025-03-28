#include <stdio.h>




// Definimos uma estrutura Pessoa com variaveis relacionadas entre si; 
struct Person { 
	char nome[64]; 
	int idade; 
	int anonascimento; 
	float altura; 

};


void displayPerson(struct Person p1) {
	printf("Nome: %s\n", p1.nome);
	printf("Idade: %d\n", p1.idade); 
	printf("Ano nascimento: %d\n", p1.anonascimento); 
	printf("Altura: %.2f", p1.altura);

} 



void process(){ 
	
	struct Person person1; 
	// Nome > fgtes faz sentido 
	printf("Nome: ");
	fgets(person1.nome, sizeof(person1.nome), stdin);  
	//Idade > scanf faz sentido 
	printf("Idade: ");
	scanf("%d", &person1.idade); 
	
	// anonascimento > scanf faz sentido 
	printf("Ano de nascimento: "); 
	scanf("%d", &person1.anonascimento);
	
	//altura > scanf faz sentido 
	printf("Digite sua altura: "); 
	scanf("%f", &person1.altura); 
	
	displayPerson(person1);
	

}


int main(){ 
	process();
	return 0; 
}
 
		





