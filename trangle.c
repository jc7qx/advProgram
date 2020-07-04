/*
    *
   ***
  *****
 *******
*********
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int nrow=7;
	int ncol=1;
	for (int i=1; i<nrow; i++)
		ncol += 2;
	
	int k=1;
	for (int i=1; i<=nrow; i++){
		for (int j=0; j<(ncol-k)/2; j++)
			printf("  ");
		for (int r=0; r<k; r++)
			printf(" *");
		k = k+2;
		printf("\n");
	}
	printf("\n");
		
	return 1;
}