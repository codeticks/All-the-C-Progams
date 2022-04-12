#include <stdio.h>
int main(){
int i,j;
    for(i=1;i<=5;i++)
    //its just a counter, by that I mean is its just 4 or 5 time, doesn't matters if we start from 1 or 5.
    {
        for(j=5;j>=1;j--)//the concept is to use j=5 and then decrement the value of j
        {
            printf("%d ",j);//here we are printing j in the decrementing order along with the spaced digits.
        }
        printf("\n");//man I always forget to print this new line, I am gonna remember this for the next time.
    }
return 0;
}