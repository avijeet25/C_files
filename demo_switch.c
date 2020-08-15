#include <stdio.h>

int main()
    {
        printf("Enter the marks\n");
        int marks;
        scanf("%d",&marks);
        switch (marks)
        {
            case 1:
            printf("A");
            break;
            default:
            printf("INVALID");
        }


        return 0;
    }
    // for compiling use --> gcc filename.c
    // for running use --> .\ filename of object file