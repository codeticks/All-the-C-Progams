    #include <stdio.h>  
    #include <string.h>  
      
    // create the Structure of student to store multiples items  
    struct student  
    {  
        char name[ 30];  
        int roll_no;  
        char state[100];  
        int age;  
    };  
    struct student s1, s2; // declare s1 and s2 variables of student structure  
      
    int main()  
    {  
        // records of the student s1  
        strcpy (s1.name, "John");  
        s1.roll_no = 1101;  
        strcpy (s1.state, "Los Angeles");  
        s1.age = 20;      
          
        // records of the student s2  
        strcpy (s2.name, " Mark Douglas");  
        s2.roll_no = 111;  
        strcpy (s2.state, "California");  
        s2.age = 18;  
          
        // print the details of the student s1;  
        printf (" Name of the student s1 is: %s\t ", s1.name);  

                return 0;  
    }  