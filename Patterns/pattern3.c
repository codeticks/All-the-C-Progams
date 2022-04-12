#include <stdio.h>
int main(){

int i,j;

    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            printf(" * "); //here keep in mind I have given space, just to make it look good.
        }
        printf("\n");
    }

return 0;
}

//don't forget to use the \n newline for breaking the line otherwise it will print all the values in one line only.
//we just simply printed * rater than using a variable and then substituting it's value.