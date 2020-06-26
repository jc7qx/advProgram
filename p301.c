/*
輸入二個整數，求乘除結果
執行除法時注意二數為整數，必須先做強制型態轉換
*/
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
