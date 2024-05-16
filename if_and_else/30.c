#include <stdio.h>




int main(){
	float media;
	float n1;
	float n2;
	


	
	
	printf("Nota no primeiro semestre: \n");
	scanf("%f", &n1);
	
	printf("Nota no segundo semestre: \n");
	scanf("%f", &n2);
	media = (n1 + n2) /2;
	printf("Media: %.1f", media);
	if(media < 7){
		printf("\nReprovado!"); 
	}else {
		printf("\nAprovado!");
	}
}
	
