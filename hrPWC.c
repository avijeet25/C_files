#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{   char s0[20],s1[20];
    char ch;
    scanf("%c",&ch);
        
    scanf("%s",&s1);
    
    scanf("\n");
    
    scanf("%[^\n]%*c",s0);printf("%c\n",ch);printf("%s\n",s1);
    //scanf("%s",&s0)
    printf("%s\n",s0);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

