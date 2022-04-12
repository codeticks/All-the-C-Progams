#include <stdio.h>
int main(){

int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("%d ",i);// we have a space after the value of the variable.
        }
        
        printf("\n");
    }
   return 0;
}

// The concept of this is, when i=1 j runs five times printing the value of i i.e 1 for the first run. and then progresses towards 5 in the last run, so this id solved if we use or replace i for j from the previous pattern.