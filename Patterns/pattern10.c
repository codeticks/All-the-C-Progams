#include <stdio.h>
int main(){
int i,j;
    for(i=1;i<=5;i++)
        {
            for(j=i;j>=1;j--) 
            //here we have j=i so that the value should change every time, and then we have j>=1 so that it stops when it reaches 1, and the we have j-- which means the value should start from i and then go down to 1, ex: i =4 then j=4 then j-- which is 4,3,2,1.
            {
                printf("%d ",j);
            }
        printf("\n");
        }
return 0;
}