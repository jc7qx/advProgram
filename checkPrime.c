//檢查質數

#include <stdio.h>
#include <stdlib.h>

int prime(int n);

int main(){
	int n;
	n=99;
	
	if (prime(n) == 1)
		printf("%d is prime\n", n);
	else
		printf("%d is not prime\n", n);
	
	return 1;
}
int prime(int n){
	int isprime = 1;
	int m = (n/2)+1;
	for (int i=2; i<m; i++)
		if (n%i==0)
			isprime=0;
	return isprime;
}	
