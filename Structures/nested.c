    #include<stdio.h>  
    struct address   
    {  
        char city[20];  
        int pin;  
        char phone[14]; 
        char name[20]; 
    }add;  
    // struct employee  
    // {  
    //     char name[20];  
    //     struct address add;  
    // };  
    void main ()  rename
    {  
        // struct employee emp;  
        printf("Enter employee information?\n");  
        scanf("%s %s %d %s",add.name,add.city, &add.pin, add.phone);  
        printf("Printing the employee information....\n");  
        printf("name: %s\nCity: %s\nPincode: %d\nPhone: %s",add.name,add.city,add.pin,add.phone);  
    }  