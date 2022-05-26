#include <stdio.h>
int main(){
    int var = 34;
    printf("%d", var);
    int *p = &var; //here we have used int type pointer pointing to the address of variable var.
    return 0;
}

int fun(int* p){ //here we have use the int type pointer p as the formal argumente, and hence linking *p and var.
    printf("%d", *p);//since p is an interger type pointer dereferencing the address of the variabel named var.
}

//---Aim to code: to understand the linking of function with pointers.
//---Date: 16th April 2022;

/* same thing without the use of pointers and only using the variable.

#include <stdio.h>
int main(){
    int var = 34;
    printf("%d", var);
    return 0;
}

int fun(){
    printf("%d", var);
}

This was the original program which was used to demonstrate the use and scope of variables, in c programs.
*/ 