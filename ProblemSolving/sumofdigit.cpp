#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);

    int SingleDigit,sum;
    
    for(sum = 0; n>0 ; n/10 ){
        SingleDigit = n%10;
        sum = sum + SingleDigit;
    }

    printf("%d", sum);

    return 0;
}