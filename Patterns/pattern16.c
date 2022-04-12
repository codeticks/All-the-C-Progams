#include <stdio.h>
int main(){
int i,j;
    for(i=5;i>=1;i--)
    //we are starting i with 5 because we need to start printing with i
    //and we are decrementing because we need to take the value from 5 to 1
    {
        for(j=i;j>=1;j--)
        //here we are initialising j with the value of i so that it starts with 5, and now we are terminating j with 1 which means the pattern will be like 54321.
        {
            printf("%d",j);
        }
    printf("\n");
    }
return 0;
}

//yay looks like i got the hang of this pattern printing this is my 3rd program that has ran without any compilation and code errors.