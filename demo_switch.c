#include <stdio.h>

int main()
    {
        printf("Enter the marks");
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