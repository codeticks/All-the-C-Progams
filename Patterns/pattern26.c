#include <stdio.h>
int main(){
int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j==1||i==5||j==i) //very good logic
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
    printf("\n");
    }
return 0;
}


//this was done by printing the spaces now I will do it by printing the *'s
// #include <stdio.h>
// int main(){
// int i,j;
//      for(i=1;i<=5;i++)
//      {
//          for(j=1;j<=i;j++)
//          {
//              if(i==3 && j==2 || i==4 && (j==2||j==3))
//              {
//                  printf(" ");
//              }
//              else
//              {
//                  printf("*");
//              }
//          }
//      printf("\n");
//      }
// return 0;
// }