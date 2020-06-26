#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b;
	
	printf("input two numbers: ");
	scanf("%d %d", &a, &b);
	
	printf("a x b = %d\n", a*b);
	printf("a / b = %f\n", a/b);
	printf("a / b = %f\n", (float)a/b);
	return 1;
}