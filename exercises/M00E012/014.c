#include <stdio.h>



int main() {
	int studentID;
	int studentAge;
	float studentFree;
	char studentGrade;
	
	printf("Digite seu ID\n");
	scanf("%d", &studentID);
	printf("Digite sua idade:\n");
	scanf("%d", &studentAge);
	printf("Digite sua altura:\n");
	scanf("%f", &studentFree);
	printf("Digite sua grade:\n");
	scanf(" %c", &studentGrade);
	
	
	printf("Seu ID: %d\n", studentID);
	printf("Sua idade: %d\n", studentAge);
	printf("Sua altura: %f\n", studentFree);
	printf("Sua grade:  %c\n", studentGrade);
}

