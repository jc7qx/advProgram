#include <stdio.h>

int main(void){
    printf("hello\n");
    for (int i=0; i<10; i++)
        printf("%d %d\n", i, i*i);
    return 1;
}