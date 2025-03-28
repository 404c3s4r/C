#include <stdio.h>



int main(){

	char fullname[7] = "Roberto";
	size_t size = sizeof(fullname) / sizeof(fullname[0]);
	printf("%zu", size);
	

}
