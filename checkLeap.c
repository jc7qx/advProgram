/*
    �P�_�|�~
    �{400���Ƭ��|�~�A�l��100���Ƥ����|�~�A��L�h��4���Ƭ��|�~�C�l�̤��O�|�~�C
*/

#include <stdio.h>
#include <stdlib.h>

int checkYear(int);

int main(){
    int y;

    printf("input year: ");
    scanf("%d", &y);

    if (checkYear(y)==1)
        printf("%d is leap year!", y);
    else
        printf("%d is not leap year!", y);

    return 1;
}
int checkYear(int year){
    if (year%400==0)
        return 1;
    else if (year%100==0)
        return 0;
    else if (year%4==0)
        return 1;
    else
        return 0;
}
