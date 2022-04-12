#include <stdio.h>
int main(){
int i,j;
    for(i=65;i<=69;i++)
    {
        for(j=69;j>=i;j--) //we give the value for what j should be stoped to i
        {
            printf("%c",j);
        }
    printf("\n");
    }
return 0;
}