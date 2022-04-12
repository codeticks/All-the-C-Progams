#include <stdio.h>
int main(){
int i,j;
    for(i=69;i>=65;i--)
    {
        for(j=69;j>=i;j--)//since its reversing we had to make both of them decrement.
        {
            printf("%c",j);
        }
    printf("\n");
    }
return 0;
}