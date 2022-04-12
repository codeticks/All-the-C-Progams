#include <stdio.h>
int main(){
int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++) 
        //the ans was to use i in decrementing form, so that it will have the terminating value as i
        {
            printf("%d",j);
        }
    printf("\n");
    }


return 0;
}