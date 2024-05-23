#include <stdio.h>
#include <math.h>


int rouds(float);
int main(){
	float result = rouds(10.2);	
	printf("%.1f", result); 
}

int rouds(float x){
	return ceil(x); 
}
