//logic from the video is to just divide j with % 2 so the remiander will be 0 and 1.
#include <stdio.h>
int main(){
int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j%2);
        }
    printf("\n");
    }
return 0;
}

/*
//logic is just to replace the 1 2 3 ascending triangles value with this.
#include <stdio.h>
int main(){
int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j==1 || j==3 || j==5)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
    printf("\n");
    }
return 0;
}
*/

/*
1
10
101
1010
10101

*/

//Ascending Triangle value
// 1
// 12
// 123
// 1234
// 12345