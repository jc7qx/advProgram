#include <stdio.h>
#include <stdlib.h>

int main(void){
    double bmi;
    float ht, wt;
	double bmival[] = {18.5, 24, 27, 30, 35};
	char judgestr[]={"�魫�L��","�魫���`","�魫�L��","���תέD","���תέD","���תέD"};

    printf("input your height and weight: ");
    scanf("%f %f", &ht, &wt); //%lf used to read number with double type
    printf("%f %f\n", ht, wt);
    bmi = wt/((ht/100)*(ht/100));
    printf("%f (", bmi);

    if (bmi < bmival[0])
        printf("�魫�L��");
    else if ((bmi>=bmival[0]) && (bmi<bmival[1]))
        printf("�魫���`");
    else if ((bmi>=bmival[1]) && (bmi<bmival[2]))
        printf("�魫�L��");
    else if ((bmi>=bmival[2]) && (bmi<bmival[3]))
        printf("���תέD");
    else if ((bmi>=bmival[3]) && (bmi<bmival[4]))
        printf("���תέD");
    else
        printf("���תέD");

    printf(")\n", bmi);
    return 1;
}
