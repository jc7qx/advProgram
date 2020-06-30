#include <stdio.h>
#include <stdlib.h>

int main(void){
    double bmi;
    float ht, wt;
	double bmival[] = {18.5, 24, 27, 30, 35};
	char judgestr[]={"體重過輕","體重正常","體重過重","輕度肥胖","中度肥胖","重度肥胖"};

    printf("input your height and weight: ");
    scanf("%f %f", &ht, &wt); //%lf used to read number with double type
    printf("%f %f\n", ht, wt);
    bmi = wt/((ht/100)*(ht/100));
    printf("%f (", bmi);

    if (bmi < bmival[0])
        printf("體重過輕");
    else if ((bmi>=bmival[0]) && (bmi<bmival[1]))
        printf("體重正常");
    else if ((bmi>=bmival[1]) && (bmi<bmival[2]))
        printf("體重過重");
    else if ((bmi>=bmival[2]) && (bmi<bmival[3]))
        printf("輕度肥胖");
    else if ((bmi>=bmival[3]) && (bmi<bmival[4]))
        printf("中度肥胖");
    else
        printf("重度肥胖");

    printf(")\n", bmi);
    return 1;
}
