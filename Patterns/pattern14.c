#include <stdio.h>
int main(){
int i,j;
    for(i=5;i>=1;i--)//we are decrementing it since we wan't to terminate j for the same for of i
    {
        for(j=5;j>=i;j--)
        //we are decrementing here also because as the value of i goes down so will the value of j will go down and whilst terminating when i and j are equal.
        {
            printf("%d",j);
        }
    printf("\n");
    }
return 0;
}