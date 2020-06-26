/*
	scanf: 由鍵盤輸入資料
	scanf("控制格式", &變數名稱);
	控制格式需與變數名稱宣告相符
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    float b, c;

    printf("input an integer: ");
    scanf("%d",&a);
    printf("input two double: \n");
    scanf("%f %f",&b,&c);

    printf("Integer = %d\n", a);
    printf("two doubles = %f %5.3f\n", b, c);

    return 1;
}