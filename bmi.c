#include <stdio.h>
#include <stdlib.h>

int main(void){
    double bmi;
    float ht, wt;

    printf("input your height and weight: ");
    scanf("%f %f", &ht, &wt); //%lf used to read number with double type
    printf("%f %f\n", ht, wt);
    bmi = wt/((ht/100)*(ht/100));
    printf("%f (", bmi);

    if (bmi < 18.5)
        printf("體重過輕");
    else if ((bmi>=18.5) && (bmi<24))
        printf("體重正常");
    else if ((bmi>=24) && (bmi<27))
        printf("體重過重");
    else if ((bmi>=27) && (bmi<30))
        printf("輕度肥胖");
    else if ((bmi>=30) && (bmi<35))
        printf("中度肥胖");
    else
        printf("重度肥胖");

    printf(")\n", bmi);
    return 1;
}
