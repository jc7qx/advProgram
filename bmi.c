#include <stdio.h>
#include <stdlib.h>

int main(void){
    double bmi;
    float ht, wt;

    printf("input your height and weight: ");
    scanf("%f %f", &ht, &wt); //%lf used to read number with double type 
    printf("%f %f\n", ht, wt);
    bmi = wt/((ht/100)*(ht/100));
    
    printf("%f\n", bmi);
    return 1;
}