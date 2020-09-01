#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int sum = 0;
    int r;
    for(int i =0;i<5;i++){
    //printf("in while loop n value is = %d\n",n);
    r=n%10;
    n = n /10;
    sum = sum + r;
    }
    //sum = sum +n;
    //printf("out of for");
    printf("%d",sum);

    return 0;
}