#include <stdio.h>
int main(){
int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(k=5;k>=i;k--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d ",j); 
            //the point to note in this patter is that we just had to add a whitespace following the j.
        }
    printf("\n");
    }
return 0;
}