#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 1;
    float b = 2.345;
    double d = 0.0000012345;
    char c = '7';
    
    printf("a = %d size = %d (bytes)\n", a, sizeof(a));
    printf("b = %f size = %d (bytes)\n", b, sizeof(b));
    printf("c = %c size = %d (bytes)\n", c, sizeof(c));
    printf("d = %15.10f size = %d (bytes)\n", d, sizeof(d));
    printf("d = %15.10e size = %d (bytes)\n", d, sizeof(d));
    return 1;
}
