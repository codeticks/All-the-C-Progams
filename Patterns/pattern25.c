#include <stdio.h>
int main(){
int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i==1 || i==5 || j==1 || j==5)
            //here remember to use the EQUAL TO (==) operator not the ASSIGNMENT OPERATOR (=)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
    printf("\n");
    }
return 0;
}