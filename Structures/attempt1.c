#include <stdio.h>

struct student
{
    char name[30];
    int roll;
    char section;
    int contact_no;
};

int main()
{
    struct student std1;
    struct student *std3;

    std3 = &std1;
    
    printf("Enter the name of student :: ");
    gets("std3.name");

    printf("%c", std3 -> name);
    return 0;
}