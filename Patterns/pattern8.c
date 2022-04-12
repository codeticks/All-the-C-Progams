#include <stdio.h>
int main(){
int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",j+64);
            //here what we should notice is: here if we would have used i rather than of using j, the counter won't start from 0, since the value of i will go like 1,2,3,4,5 only once, whereas the counter of j resets everytime its condition turns false, and then it goes to i then again it comes back to j with the starting value fo j as 1, so if we use the ASCII to print a,b,c then 1+64 will be A, but in the case of i, it will be like, 1+64=A, 2+64=B, but in j it will always start with A, but in the case of i, it will start with A but won't continue with A in the second line.
        }
    printf("\n");
    }
return 0;
}