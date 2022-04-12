#include <stdio.h>


int main() {
    char Input;
    double n1, n2;

    printf("Enter the type of operation you want to perform Like +, - , * , /  : ");
    scanf("%c", &Input);
    printf("Enter the operands");
    scanf("%lf %lf", &n1, &n2);

    switch(Input)
    {
        case '+' :
            printf("%.2lf + %.2lf = %.2lf", n1, n2, n1+n2);
            break;

        case '-' :
            printf("%.2lf - %.2lf = %.2lf", n1, n2, n1-n2);
            break;

        case '*' :
            printf("%.2lf * %.2lf = %.2lf", n1, n2, n1*n2);
            break;

        case '/' :
            printf("%.2lf / %.2lf = %.2ld", n1, n2, n1/n2);
            break;

        default: 
            printf("Error! Check input.");
    }

    return 0;
}