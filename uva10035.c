#include <stdio.h>

int main(){

    long int a, b, count, carry;

    scanf("%d%d", &a, &b);
    while ((a||b)!=0){                   //�ˬda, b���P��=0
        count = 0;                       //reset count = 0, for new data
        carry = 0;                       //reset carry = 0, for new data
        while (a%10+b%10 != 0){         //�P��Ƭۥ[������0
            if (a%10+b%10+carry > 9){   //�ݭn�i��
                carry = 1;
                count++;
            }
            a = a/10; //�Ʀr�k��
            b = b/10; //�Ʀr�k��
        }
        //�L�X���G
        if (count==0) printf("No carry operation.\n");
        else printf("%d carry operations.\n", count);

        scanf("%d%d", &a, &b); //Ū���U�@�ո��a, b
    }

    return 0;
}
