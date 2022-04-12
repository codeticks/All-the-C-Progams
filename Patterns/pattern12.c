#include <stdio.h>
int main(){
int i,j;
    for(i=5;i>=1;i--) //we are reducing i since it will be the limitation for the no of times j runs.
    {
        for(j=1;j<=i;j++)//here j will go upto the values of i before terminating.
        {
            printf("%d",j);
        }
    printf("\n");
    }
return 0;
}