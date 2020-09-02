#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    int arr1[num];
    for(int x = num-1;x>=0;x--)
    {
        arr[x]=*(arr + x);
        printf("%d ",arr[x]);
    }
    
    //printf("%d \n",arr1);
    // for(i = 0; i < num; i++)
    //     printf("%d ", *(arr + i));
    return 0;
}