#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    int len = strlen(s);
    char str[len];
    // str[] = s;
    char *p = s;
    for(int i = 0;i<len;i++){
        str[i] = *(p+i);        
    }
    for(int j = 0 ; j < len ; j++){
        if(str[j] == ' ') {printf("\n");continue ;}
        printf("%c",str[j]);
    }        
            // if(*(p+i)!=" "){
            //     printf("\n");
            //     continue;
            // }
            // printf("%c",*(p+i));
    
    
    //printf(s);
    //Write your logic to print the tokens of the sentence here.
    return 0;
}