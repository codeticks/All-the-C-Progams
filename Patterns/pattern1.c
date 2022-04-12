#include <stdio.h>
int main(){

int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("%d ",j);
            //here I have a close look after we are printing the value of the variable, I have given space.
        }
        
        printf("\n");
    }
   return 0;
}