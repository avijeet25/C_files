#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
    int d = (n*2)-1;
  	// Complete the code to print the pattern.
    for(int i =0;i <d;i++)
    {
        for(int k = n;k>0;k--){
            printf("%d ",k);
            
        }
        printf("\n");
        --d;
    }
    

    return 0;
}
/*

for n =5
5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5

*/