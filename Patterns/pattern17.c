#include <stdio.h>
int main(){
int i,j;
    for(i=65;i<=69;i++)
    {
        for(j=i;j>=65;j--)
        {
            printf("%c",j); //we are printing charecters using %c datatype.
        }
    printf("\n");
    }
return 0;
}