#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char str[20];int counter;
    scanf("%s",str);
    printf("%s",str);
    for (int i =0;i<str[i]!= '\0';i++){
    if(isdigit(str[i])!=0){counter++;}
    printf("%d",counter);}
    return 0;
}
