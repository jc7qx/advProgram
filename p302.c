/*
	輸入一個溫度及溫度類型(c/f),將其轉換成華氏或攝氏
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	char x;
	int temp;
	double y;
	
	printf("input type of temp (c/f), tempature: ");
	scanf("%c %d", &x, &temp);
	
	if (x == 'c')
	{
		y = temp*((double)9/5)+32; //c to f
		printf("c: %d => f: %f\n", temp, y);
	}
	else {
		y = (temp-32)*((double)5/9); //f to c
		printf("f: %d => c: %f\n", temp, y);
	}
	return 1;
}