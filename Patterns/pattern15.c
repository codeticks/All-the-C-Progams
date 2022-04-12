#include <stdio.h>
int main(){
int i,j;
    for(i=1;i<=5;i++)//we are inc. cz we need the counter to go down.
    {
        for(j=5;j>=i;j--)
        //we are decrementing j,cz that's what we want the values to go down like 54321.
        {
            printf("%d",j);
        }
    printf("\n");
    }
return 0;
}

//YYAY MAN THIS WAS MY 2ND PROGRAM THAT RAN WITHOUT COMPILATION AND CODE ERROS!!.