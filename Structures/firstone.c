#include <stdio.h>
#include <string.h>

struct student{
                char name[300];
                int roll;
                char class[3];
                char department[100];
                double contact_no;
};

struct student s1,s2;

int main(){

    strcpy(s1.name,"Yogesh");
    s1.roll = 21456;
    strcpy(s1.class,"A");
    strcpy(s1.department,"BCA");

    printf("Name of the student s1 is : %s",s1.name);


    return 0;
}