#include <stdio.h>

int main(){

    long int a, b, count, carry;

    scanf("%d%d", &a, &b);
    while ((a||b)!=0){                   //檢查a, b不同時=0
        count = 0;                       //reset count = 0, for new data
        carry = 0;                       //reset carry = 0, for new data
        while (a%10+b%10 != 0){         //同位數相加不等於0
            if (a%10+b%10+carry > 9){   //需要進位
                carry = 1;
                count++;
            }
            a = a/10; //數字右移
            b = b/10; //數字右移
        }
        //印出結果
        if (count==0) printf("No carry operation.\n");
        else printf("%d carry operations.\n", count);

        scanf("%d%d", &a, &b); //讀取下一組資料a, b
    }

    return 0;
}
